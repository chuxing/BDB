#include <db.h> 
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <linux/unistd.h>
#include <unistd.h>
#include <string.h>

# define ROUNDS 1000

void tohex(int target, char* ret) {
	ret[8] = '\0';

	int index = 7;
	int tmp = target;
	while (tmp) {
		ret[index] = (tmp % 16) + '0';
		index--;
		tmp /= 16;
	}

	while (index >= 0) {
		ret[index] = '0';
		index--;
	}
}


void print_error(int ret)
{
	if (ret != 0)
		printf("ERROR: %s\n", db_strerror(ret));
}

void init_DBT(DBT * key, DBT * data)
{
	memset(key, 0, sizeof(DBT));
	memset(data, 0, sizeof(DBT));
}

void main(void)
{
	typedef struct customer
	{
		int  c_id;
		char name[10];
		char address[20];
		int  age;
	} CUSTOMER;

	DB *dbp;
	DBT key, data;
	u_int32_t flags;
	int i, ret;
	struct timeval start, end;
	double puttime, gettime1, gettime2;


	ret = db_create(&dbp, NULL, 0);
	print_error(ret);


	flags = DB_CREATE;

	ret = dbp->open(dbp, NULL, "complex.db", NULL, DB_BTREE, flags, 0);
	print_error(ret);

	int index = 0;
	CUSTOMER val[ROUNDS];

	int pfail = 0;
	for (i = 0; i < ROUNDS; i++) {

		CUSTOMER cust;
		cust.c_id = i;
		strncpy(cust.name, "javer", 9);
		strncpy(cust.address, "chengdu", 19);
		cust.age = 32;
		val[i] = cust;

		gettimeofday(&start, NULL);
		init_DBT(&key, &data);
		key.size = sizeof(int);
		key.data = &(val[i].c_id);
		data.size = sizeof(CUSTOMER);
		data.data = &val[i];
		
		ret = dbp->put(dbp, NULL, &key, &data, DB_NOOVERWRITE);
		gettimeofday(&end, NULL);
		puttime += 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
		if (ret != 0)
			pfail++;
	}

	dbp->sync(dbp, 0);

	CUSTOMER cust;

	int gfail1 = 0, match1 = 0, unmatch1 = 0;
	for (i = 0; i < ROUNDS; i++) {
		memset(&cust, 0, sizeof(CUSTOMER));
		gettimeofday(&start, NULL);

		key.size = sizeof(int);
		key.data = &val[i].c_id;
		data.data = &cust;
		data.ulen = sizeof(CUSTOMER);
		data.flags = DB_DBT_USERMEM;
		dbp->get(dbp, NULL, &key, &data, 0);
		gettimeofday(&end, NULL);
		gettime1 += 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
		if (ret != 0)
			gfail1++;
		
		if (cust.c_id == val[i].c_id)
			match1++;
		else unmatch1++;
	}

	int gfail2 = 0, match2 = 0, unmatch2 = 0;
	for (i = 0; i < ROUNDS; i++) {
		memset(&cust, 0, sizeof(CUSTOMER));
		int idx = rand() % ROUNDS;
		gettimeofday(&start, NULL);

		key.size = sizeof(int);
		key.data = &val[idx].c_id;
		data.data = &cust;
		data.ulen = sizeof(CUSTOMER);
		data.flags = DB_DBT_USERMEM;
		dbp->get(dbp, NULL, &key, &data, 0);
		gettimeofday(&end, NULL);
		gettime2 += 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
		if (ret != 0)
			gfail2++;
		
		if (cust.c_id == val[idx].c_id)
			match1++;
		else unmatch1++;
	}

	if (dbp != NULL)
		dbp->close(dbp, 0);

	printf("@@ Put and get for %d rounds, result:\n", ROUNDS);
	printf("@@ put use time: %f, failure times: %d\n", puttime, pfail);
	printf("@@ sequence get use time: %f, match times: %d, mismatch times: %d, failure times: %d\n", gettime1, match1, unmatch1, gfail1);
	printf("@@ random get use time: %f, match times: %d, mismatch times: %d, failure times: %d\n", gettime2, match2, unmatch2, gfail2);
}
