/*
 * This test program is licensed  
 * under the GNU AFFERO GENERAL PUBLIC LICENSE:
 *
 *
 *                  GNU AFFERO GENERAL PUBLIC LICENSE
 *                     Version 3, 19 November 2007
 *
 * Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
 * Everyone is permitted to copy and distribute verbatim copies
 * of this license document, but changing it is not allowed.
 *
 *                          Preamble
 *
 *  The GNU Affero General Public License is a free, copyleft license for
 * software and other kinds of works, specifically designed to ensure
 * cooperation with the community in the case of network server software.
 *
 *  The licenses for most software and other practical works are designed
 * to take away your freedom to share and change the works.  By contrast,
 * our General Public Licenses are intended to guarantee your freedom to
 * share and change all versions of a program--to make sure it remains free
 * software for all its users.
 *
 *  When we speak of free software, we are referring to freedom, not
 * price.  Our General Public Licenses are designed to make sure that you
 * have the freedom to distribute copies of free software (and charge for
 * them if you wish), that you receive source code or can get it if you
 * want it, that you can change the software or use pieces of it in new
 * free programs, and that you know you can do these things.
 *
 *  Developers that use our General Public Licenses protect your rights
 * with two steps: (1) assert copyright on the software, and (2) offer
 * you this License which gives you legal permission to copy, distribute
 * and/or modify the software.
 *
 *  A secondary benefit of defending all users' freedom is that
 * improvements made in alternate versions of the program, if they
 * receive widespread use, become available for other developers to
 * incorporate.  Many developers of free software are heartened and
 * encouraged by the resulting cooperation.  However, in the case of
 * software used on network servers, this result may fail to come about.
 * The GNU General Public License permits making a modified version and
 * letting the public access it on a server without ever releasing its
 * source code to the public.
 *
 *  The GNU Affero General Public License is designed specifically to
 * ensure that, in such cases, the modified source code becomes available
 * to the community.  It requires the operator of a network server to
 * provide the source code of the modified version running there to the
 * users of that server.  Therefore, public use of a modified version, on
 * a publicly accessible server, gives the public access to the source
 * code of the modified version.
 *
 *  An older license, called the Affero General Public License and
 * published by Affero, was designed to accomplish similar goals.  This is
 * a different license, not a version of the Affero GPL, but Affero has
 * released a new version of the Affero GPL which permits relicensing under
 * this license.
 *
 *  The precise terms and conditions for copying, distribution and
 * modification follow.
 *
 *                     TERMS AND CONDITIONS
 *
 *  0. Definitions.
 *
 *  "This License" refers to version 3 of the GNU Affero General Public License.
 * 
 *  "Copyright" also means copyright-like laws that apply to other kinds of
 * works, such as semiconductor masks.
 *
 *  "The Program" refers to any copyrightable work licensed under this
 * License.  Each licensee is addressed as "you".  "Licensees" and
 * "recipients" may be individuals or organizations.
 *
 *  To "modify" a work means to copy from or adapt all or part of the work
 * in a fashion requiring copyright permission, other than the making of an
 * exact copy.  The resulting work is called a "modified version" of the
 * earlier work or a work "based on" the earlier work.
 *
 *  A "covered work" means either the unmodified Program or a work based
 * on the Program.
 *
 *  To "propagate" a work means to do anything with it that, without
 * permission, would make you directly or secondarily liable for
 * infringement under applicable copyright law, except executing it on a
 * computer or modifying a private copy.  Propagation includes copying,
 * distribution (with or without modification), making available to the
 * public, and in some countries other activities as well.
 *
 *  To "convey" a work means any kind of propagation that enables other
 * parties to make or receive copies.  Mere interaction with a user through
 * a computer network, with no transfer of a copy, is not conveying.
 *
 *  An interactive user interface displays "Appropriate Legal Notices"
 * to the extent that it includes a convenient and prominently visible
 * feature that (1) displays an appropriate copyright notice, and (2)
 * tells the user that there is no warranty for the work (except to the
 * extent that warranties are provided), that licensees may convey the
 * work under this License, and how to view a copy of this License.  If
 * the interface presents a list of user commands or options, such as a
 * menu, a prominent item in the list meets this criterion.
 *
 *  1. Source Code.
 * 
 *  The "source code" for a work means the preferred form of the work
 * for making modifications to it.  "Object code" means any non-source
 * form of a work.
 * 
 *  A "Standard Interface" means an interface that either is an official
 * standard defined by a recognized standards body, or, in the case of
 * interfaces specified for a particular programming language, one that
 * is widely used among developers working in that language.
 *
 *  The "System Libraries" of an executable work include anything, other
 * than the work as a whole, that (a) is included in the normal form of
 * packaging a Major Component, but which is not part of that Major
 * Component, and (b) serves only to enable use of the work with that
 * Major Component, or to implement a Standard Interface for which an
 * implementation is available to the public in source code form.  A
 * "Major Component", in this context, means a major essential component
 * (kernel, window system, and so on) of the specific operating system
 * (if any) on which the executable work runs, or a compiler used to
 * produce the work, or an object code interpreter used to run it.
 *
 *  The "Corresponding Source" for a work in object code form means all
 * the source code needed to generate, install, and (for an executable
 * work) run the object code and to modify the work, including scripts to
 * control those activities.  However, it does not include the work's
 * System Libraries, or general-purpose tools or generally available free
 * programs which are used unmodified in performing those activities but
 * which are not part of the work.  For example, Corresponding Source
 * includes interface definition files associated with source files for
 * the work, and the source code for shared libraries and dynamically
 * linked subprograms that the work is specifically designed to require,
 * such as by intimate data communication or control flow between those
 * subprograms and other parts of the work.
 *
 *  The Corresponding Source need not include anything that users
 * can regenerate automatically from other parts of the Corresponding
 * Source.
 *
 *  The Corresponding Source for a work in source code form is that
 * same work.
 *
 *  2. Basic Permissions.
 *
 *  All rights granted under this License are granted for the term of
 * copyright on the Program, and are irrevocable provided the stated
 * conditions are met.  This License explicitly affirms your unlimited
 * permission to run the unmodified Program.  The output from running a
 * covered work is covered by this License only if the output, given its
 * content, constitutes a covered work.  This License acknowledges your
 * rights of fair use or other equivalent, as provided by copyright law.
 * 
 * You may make, run and propagate covered works that you do not
 * convey, without conditions so long as your license otherwise remains
 * in force.  You may convey covered works to others for the sole purpose
 * of having them make modifications exclusively for you, or provide you
 * with facilities for running those works, provided that you comply with
 * the terms of this License in conveying all material for which you do
 * not control copyright.  Those thus making or running the covered works
 * for you must do so exclusively on your behalf, under your direction
 * and control, on terms that prohibit them from making any copies of
 * your copyrighted material outside their relationship with you.
 * 
 *   Conveying under any other circumstances is permitted solely under
 * the conditions stated below.  Sublicensing is not allowed; section 10
 * makes it unnecessary.
 * 
 *   3. Protecting Users' Legal Rights From Anti-Circumvention Law.
 * 
 *   No covered work shall be deemed part of an effective technological
 * measure under any applicable law fulfilling obligations under article
 * 11 of the WIPO copyright treaty adopted on 20 December 1996, or
 * similar laws prohibiting or restricting circumvention of such
 * measures.
 * 
 *   When you convey a covered work, you waive any legal power to forbid
 * circumvention of technological measures to the extent such circumvention
 * is effected by exercising rights under this License with respect to
 * the covered work, and you disclaim any intention to limit operation or
 * modification of the work as a means of enforcing, against the work's
 * users, your or third parties' legal rights to forbid circumvention of
 * technological measures.
 * 
 *   4. Conveying Verbatim Copies.
 * 
 *   You may convey verbatim copies of the Program's source code as you
 * receive it, in any medium, provided that you conspicuously and
 * appropriately publish on each copy an appropriate copyright notice;
 * keep intact all notices stating that this License and any
 * non-permissive terms added in accord with section 7 apply to the code;
 * keep intact all notices of the absence of any warranty; and give all
 * recipients a copy of this License along with the Program.
 * 
 *   You may charge any price or no price for each copy that you convey,
 * and you may offer support or warranty protection for a fee.
 * 
 *   5. Conveying Modified Source Versions.
 * 
 *   You may convey a work based on the Program, or the modifications to
 * produce it from the Program, in the form of source code under the
 * terms of section 4, provided that you also meet all of these conditions:
 * 
 *     a) The work must carry prominent notices stating that you modified
 *     it, and giving a relevant date.
 * 
 *     b) The work must carry prominent notices stating that it is
 *     released under this License and any conditions added under section
 *     7.  This requirement modifies the requirement in section 4 to
 *     "keep intact all notices".
 * 
 *     c) You must license the entire work, as a whole, under this
 *     License to anyone who comes into possession of a copy.  This
 *     License will therefore apply, along with any applicable section 7
 *     additional terms, to the whole of the work, and all its parts,
 *     regardless of how they are packaged.  This License gives no
 *     additional terms, to the whole of the work, and all its parts,
 *     regardless of how they are packaged.  This License gives no
 *     permission to license the work in any other way, but it does not
 *     invalidate such permission if you have separately received it.
 * 
 *     d) If the work has interactive user interfaces, each must display
 *     Appropriate Legal Notices; however, if the Program has interactive
 *     interfaces that do not display Appropriate Legal Notices, your
 *     work need not make them do so.
 * 
 *  A compilation of a covered work with other separate and independent
 * works, which are not by their nature extensions of the covered work,
 * and which are not combined with it such as to form a larger program,
 * in or on a volume of a storage or distribution medium, is called an
 * "aggregate" if the compilation and its resulting copyright are not
 * used to limit the access or legal rights of the compilation's users
 * beyond what the individual works permit.  Inclusion of a covered work
 * in an aggregate does not cause this License to apply to the other
 * parts of the aggregate.
 * 
 *   6. Conveying Non-Source Forms.
 * 
 *   You may convey a covered work in object code form under the terms
 * of sections 4 and 5, provided that you also convey the
 * machine-readable Corresponding Source under the terms of this License,
 * in one of these ways:
 * 
 *     a) Convey the object code in, or embodied in, a physical product
 *     (including a physical distribution medium), accompanied by the
 *     Corresponding Source fixed on a durable physical medium
 *     customarily used for software interchange.
 * 
 *     b) Convey the object code in, or embodied in, a physical product
 *     (including a physical distribution medium), accompanied by a
 *     written offer, valid for at least three years and valid for as
 *     long as you offer spare parts or customer support for that product
 *     model, to give anyone who possesses the object code either (1) a
 *     copy of the Corresponding Source for all the software in the
 *     product that is covered by this License, on a durable physical
 *     medium customarily used for software interchange, for a price no
 *     more than your reasonable cost of physically performing this
 *     conveying of source, or (2) access to copy the
 *     Corresponding Source from a network server at no charge.
 * 
 *     c) Convey individual copies of the object code with a copy of the
 *     written offer to provide the Corresponding Source.  This
 *     alternative is allowed only occasionally and noncommercially, and
 *     only if you received the object code with such an offer, in accord
 *     with subsection 6b.
 * 
 *     d) Convey the object code by offering access from a designated
 *     place (gratis or for a charge), and offer equivalent access to the
 *     Corresponding Source in the same way through the same place at no
 *     further charge.  You need not require recipients to copy the
 *     Corresponding Source along with the object code.  If the place to
 *     copy the object code is a network server, the Corresponding Source
 *     may be on a different server (operated by you or a third party)
 *     that supports equivalent copying facilities, provided you maintain
 *     clear directions next to the object code saying where to find the
 *     Corresponding Source.  Regardless of what server hosts the
 *     Corresponding Source, you remain obligated to ensure that it is
 *     available for as long as needed to satisfy these requirements.
 * 
 *     e) Convey the object code using peer-to-peer transmission, provided
 *     you inform other peers where the object code and Corresponding
 *     Source of the work are being offered to the general public at no
 *     charge under subsection 6d.
 * 
 *   A separable portion of the object code, whose source code is excluded
 * from the Corresponding Source as a System Library, need not be
 * included in conveying the object code work.
 * 
 *   A "User Product" is either (1) a "consumer product", which means any
 * tangible personal property which is normally used for personal, family,
 * or household purposes, or (2) anything designed or sold for incorporation
 * into a dwelling.  In determining whether a product is a consumer product,
 * doubtful cases shall be resolved in favor of coverage.  For a particular
 * product received by a particular user, "normally used" refers to a
 * typical or common use of that class of product, regardless of the status
 * of the particular user or of the way in which the particular user
 * actually uses, or expects or is expected to use, the product.  A product
 * is a consumer product regardless of whether the product has substantial
 * commercial, industrial or non-consumer uses, unless such uses represent
 * the only significant mode of use of the product.
 * 
 *   "Installation Information" for a User Product means any methods,
 * procedures, authorization keys, or other information required to install
 * and execute modified versions of a covered work in that User Product from
 * a modified version of its Corresponding Source.  The information must
 * suffice to ensure that the continued functioning of the modified object
 * code is in no case prevented or interfered with solely because
 * modification has been made.
 * 
 *   If you convey an object code work under this section in, or with, or
 * specifically for use in, a User Product, and the conveying occurs as
 * part of a transaction in which the right of possession and use of the
 * User Product is transferred to the recipient in perpetuity or for a
 * fixed term (regardless of how the transaction is characterized), the
 * Corresponding Source conveyed under this section must be accompanied
 * by the Installation Information.  But this requirement does not apply
 * if neither you nor any third party retains the ability to install
 * modified object code on the User Product (for example, the work has
 * been installed in ROM).
 * 
 *   The requirement to provide Installation Information does not include a
 * requirement to continue to provide support service, warranty, or updates
 * for a work that has been modified or installed by the recipient, or for
 * the User Product in which it has been modified or installed.  Access to a
 * network may be denied when the modification itself materially and
 * adversely affects the operation of the network or violates the rules and
 * protocols for communication across the network.
 * 
 *   Corresponding Source conveyed, and Installation Information provided,
 * in accord with this section must be in a format that is publicly
 * documented (and with an implementation available to the public in
 * source code form), and must require no special password or key for
 * unpacking, reading or copying.
 * 
 *   7. Additional Terms.
 * 
 *   "Additional permissions" are terms that supplement the terms of this
 * License by making exceptions from one or more of its conditions.
 * Additional permissions that are applicable to the entire Program shall
 * be treated as though they were included in this License, to the extent
 * that they are valid under applicable law.  If additional permissions
 * apply only to part of the Program, that part may be used separately
 * under those permissions, but the entire Program remains governed by
 * this License without regard to the additional permissions.
 *   When you convey a copy of a covered work, you may at your option
 * remove any additional permissions from that copy, or from any part of
 * it.  (Additional permissions may be written to require their own
 * removal in certain cases when you modify the work.)  You may place
 * additional permissions on material, added by you to a covered work,
 * for which you have or can give appropriate copyright permission.
 * 
 *   Notwithstanding any other provision of this License, for material you
 * add to a covered work, you may (if authorized by the copyright holders of
 * that material) supplement the terms of this License with terms:
 * 
 *     a) Disclaiming warranty or limiting liability differently from the
 *     terms of sections 15 and 16 of this License; or
 * 
 *     b) Requiring preservation of specified reasonable legal notices or
 *     author attributions in that material or in the Appropriate Legal
 *     Notices displayed by works containing it; or
 * 
 *     c) Prohibiting misrepresentation of the origin of that material, or
 *     requiring that modified versions of such material be marked in
 *     reasonable ways as different from the original version; or
 * 
 *     d) Limiting the use for publicity purposes of names of licensors or
 *     authors of the material; or
 * 
 *     e) Declining to grant rights under trademark law for use of some
 *     trade names, trademarks, or service marks; or
 * 
 *     f) Requiring indemnification of licensors and authors of that
 *     material by anyone who conveys the material (or modified versions of
 *     it) with contractual assumptions of liability to the recipient, for
 *     any liability that these contractual assumptions directly impose on
 *     those licensors and authors.
 * 
 *   All other non-permissive additional terms are considered "further
 * restrictions" within the meaning of section 10.  If the Program as you
 * received it, or any part of it, contains a notice stating that it is
 * governed by this License along with a term that is a further
 * restriction, you may remove that term.  If a license document contains
 * a further restriction but permits relicensing or conveying under this
 * License, you may add to a covered work material governed by the terms
 * of that license document, provided that the further restriction does
 * not survive such relicensing or conveying.
 * 
 *   If you add terms to a covered work in accord with this section, you
 * must place, in the relevant source files, a statement of the
 * additional terms that apply to those files, or a notice indicating
 * where to find the applicable terms.
 * 
 *   Additional terms, permissive or non-permissive, may be stated in the
 * form of a separately written license, or stated as exceptions;
 * the above requirements apply either way.
 * 
 *   8. Termination.
 * 
 *   You may not propagate or modify a covered work except as expressly
 * provided under this License.  Any attempt otherwise to propagate or
 * modify it is void, and will automatically terminate your rights under
 * this License (including any patent licenses granted under the third
 * paragraph of section 11).
 * 
 *   However, if you cease all violation of this License, then your
 * license from a particular copyright holder is reinstated (a)
 * provisionally, unless and until the copyright holder explicitly and
 * finally terminates your license, and (b) permanently, if the copyright
 * holder fails to notify you of the violation by some reasonable means
 * prior to 60 days after the cessation.
 * 
 *   Moreover, your license from a particular copyright holder is
 * reinstated permanently if the copyright holder notifies you of the
 * violation by some reasonable means, this is the first time you have
 * received notice of violation of this License (for any work) from that
 * copyright holder, and you cure the violation prior to 30 days after
 * your receipt of the notice.
 * 
 *   Termination of your rights under this section does not terminate the
 * licenses of parties who have received copies or rights from you under
 * this License.  If your rights have been terminated and not permanently
 * reinstated, you do not qualify to receive new licenses for the same
 * material under section 10.
 * 
 *   9. Acceptance Not Required for Having Copies.
 * 
 *   You are not required to accept this License in order to receive or
 * run a copy of the Program.  Ancillary propagation of a covered work
 * occurring solely as a consequence of using peer-to-peer transmission
 * to receive a copy likewise does not require acceptance.  However,
 * nothing other than this License grants you permission to propagate or
 * modify any covered work.  These actions infringe copyright if you do
 * not accept this License.  Therefore, by modifying or propagating a
 * covered work, you indicate your acceptance of this License to do so.
 * 
 *   10. Automatic Licensing of Downstream Recipients.
 * 
 *   Each time you convey a covered work, the recipient automatically
 * receives a license from the original licensors, to run, modify and
 * propagate that work, subject to this License.  You are not responsible
 * for enforcing compliance by third parties with this License.
 * 
 *   An "entity transaction" is a transaction transferring control of an
 * organization, or substantially all assets of one, or subdividing an
 * organization, or merging organizations.  If propagation of a covered
 * work results from an entity transaction, each party to that
 * transaction who receives a copy of the work also receives whatever
 * licenses to the work the party's predecessor in interest had or could
 * give under the previous paragraph, plus a right to possession of the
 * Corresponding Source of the work from the predecessor in interest, if
 * the predecessor has it or can get it with reasonable efforts.
 * 
 *   You may not impose any further restrictions on the exercise of the
 * rights granted or affirmed under this License.  For example, you may
 * not impose a license fee, royalty, or other charge for exercise of
 * rights granted under this License, and you may not initiate litigation
 * (including a cross-claim or counterclaim in a lawsuit) alleging that
 * any patent claim is infringed by making, using, selling, offering for
 * sale, or importing the Program or any portion of it.
 * 
 *   11. Patents.
 * 
 *   A "contributor" is a copyright holder who authorizes use under this
 * License of the Program or a work on which the Program is based.  The
 * work thus licensed is called the contributor's "contributor version".
 * 
 *   A contributor's "essential patent claims" are all patent claims
 * owned or controlled by the contributor, whether already acquired or
 * hereafter acquired, that would be infringed by some manner, permitted
 * by this License, of making, using, or selling its contributor version,
 * but do not include claims that would be infringed only as a
 * consequence of further modification of the contributor version.  For
 * purposes of this definition, "control" includes the right to grant
 * patent sublicenses in a manner consistent with the requirements of
 * this License.
 * 
 *   Each contributor grants you a non-exclusive, worldwide, royalty-free
 * patent license under the contributor's essential patent claims, to
 * make, use, sell, offer for sale, import and otherwise run, modify and
 * propagate the contents of its contributor version.
 * 
 *   In the following three paragraphs, a "patent license" is any express
 * agreement or commitment, however denominated, not to enforce a patent
 * (such as an express permission to practice a patent or covenant not to
 * sue for patent infringement).  To "grant" such a patent license to a
 * party means to make such an agreement or commitment not to enforce a
 * patent against the party.
 * 
 *   If you convey a covered work, knowingly relying on a patent license,
 * and the Corresponding Source of the work is not available for anyone
 * to copy, free of charge and under the terms of this License, through a
 * publicly available network server or other readily accessible means,
 * then you must either (1) cause the Corresponding Source to be so
 * available, or (2) arrange to deprive yourself of the benefit of the
 * patent license for this particular work, or (3) arrange, in a manner
 * consistent with the requirements of this License, to extend the patent
 * license to downstream recipients.  "Knowingly relying" means you have
 * actual knowledge that, but for the patent license, your conveying the
 * covered work in a country, or your recipient's use of the covered work
 * in a country, would infringe one or more identifiable patents in that
 * country that you have reason to believe are valid.
 * 
 *   If, pursuant to or in connection with a single transaction or
 * arrangement, you convey, or propagate by procuring conveyance of, a
 * covered work, and grant a patent license to some of the parties
 * receiving the covered work authorizing them to use, propagate, modify
 * or convey a specific copy of the covered work, then the patent license
 * you grant is automatically extended to all recipients of the covered
 * work and works based on it.
 * 
 *   A patent license is "discriminatory" if it does not include within
 * the scope of its coverage, prohibits the exercise of, or is
 * conditioned on the non-exercise of one or more of the rights that are
 * specifically granted under this License.  You may not convey a covered
 * work if you are a party to an arrangement with a third party that is
 * in the business of distributing software, under which you make payment
 * to the third party based on the extent of your activity of conveying
 * the work, and under which the third party grants, to any of the
 * parties who would receive the covered work from you, a discriminatory
 * patent license (a) in connection with copies of the covered work
 * conveyed by you (or copies made from those copies), or (b) primarily
 * for and in connection with specific products or compilations that
 * contain the covered work, unless you entered into that arrangement,
 * or that patent license was granted, prior to 28 March 2007.
 * 
 *   Nothing in this License shall be construed as excluding or limiting
 * any implied license or other defenses to infringement that may
 * otherwise be available to you under applicable patent law.
 * 
 *   12. No Surrender of Others' Freedom.
 * 
 *   If conditions are imposed on you (whether by court order, agreement or
 * otherwise) that contradict the conditions of this License, they do not
 * excuse you from the conditions of this License.  If you cannot convey a
 * covered work so as to satisfy simultaneously your obligations under this
 * License and any other pertinent obligations, then as a consequence you may
 * not convey it at all.  For example, if you agree to terms that obligate you
 * to collect a royalty for further conveying from those to whom you convey
 * the Program, the only way you could satisfy both those terms and this
 * License would be to refrain entirely from conveying the Program.
 * 
 *   13. Remote Network Interaction; Use with the GNU General Public License.
 * 
 *   Notwithstanding any other provision of this License, if you modify the
 * Program, your modified version must prominently offer all users
 * interacting with it remotely through a computer network (if your version
 * supports such interaction) an opportunity to receive the Corresponding
 * Source of your version by providing access to the Corresponding Source
 * from a network server at no charge, through some standard or customary
 * means of facilitating copying of software.  This Corresponding Source
 * shall include the Corresponding Source for any work covered by version 3
 * of the GNU General Public License that is incorporated pursuant to the
 * following paragraph.
 * 
 *   Notwithstanding any other provision of this License, you have
 * permission to link or combine any covered work with a work licensed
 * under version 3 of the GNU General Public License into a single
 * combined work, and to convey the resulting work.  The terms of this
 * License will continue to apply to the part which is the covered work,
 * but the work with which it is combined will remain governed by version
 * 3 of the GNU General Public License.
 * 
 *   14. Revised Versions of this License.
 * 
 *   The Free Software Foundation may publish revised and/or new versions of
 * the GNU Affero General Public License from time to time.  Such new versions
 * will be similar in spirit to the present version, but may differ in detail to
 * address new problems or concerns.
 * 
 *   Each version is given a distinguishing version number.  If the
 * Program specifies that a certain numbered version of the GNU Affero General
 * Public License "or any later version" applies to it, you have the
 * option of following the terms and conditions either of that numbered
 * version or of any later version published by the Free Software
 * Foundation.  If the Program does not specify a version number of the
 * GNU Affero General Public License, you may choose any version ever published
 * by the Free Software Foundation.
 * 
 *   If the Program specifies that a proxy can decide which future
 * versions of the GNU Affero General Public License can be used, that proxy's
 * public statement of acceptance of a version permanently authorizes you
 * to choose that version for the Program.
 * 
 *   Later license versions may give you additional or different
 * permissions.  However, no additional obligations are imposed on any
 * author or copyright holder as a result of your choosing to follow a
 * later version.
 * 
 *   15. Disclaimer of Warranty.
 * 
 *   THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY
 * APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT
 * HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY
 * OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM
 * IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF
 * ALL NECESSARY SERVICING, REPAIR OR CORRECTION.
 * 
 *   16. Limitation of Liability.
 * 
 *   IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
 * WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND/OR CONVEYS
 * THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY
 * GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE
 * USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF
 * DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD
 * PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS),
 * EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGES.
 * 
 *   17. Interpretation of Sections 15 and 16.
 * 
 *   If the disclaimer of warranty and limitation of liability provided
 * above cannot be given local legal effect according to their terms,
 * reviewing courts shall apply local law that most closely approximates
 * an absolute waiver of all civil liability in connection with the
 * Program, unless a warranty or assumption of liability accompanies a
 * copy of the Program in return for a fee.
 * 
 *                      END OF TERMS AND CONDITIONS
 *
 *
 * Copyright (c) 2014, 2015 Oracle and/or its affiliates.  All rights reserved.
 *
 */
 /*
 *
 *      Program Description:
 *	insert - An example of using Oracle Berkeley DB to achieve superior
 *	performance for an insert of 100,000 records into an in-memory 
 *      database.
 *
 *      The concept for the benchmark came from the Microsoft Press 
 *      ebook "Introducing Microsoft SQL Server 2014."
 *
 *	declare @i int = 1
 *	declare @rowcount int = 100000
 *	declare @c nchar(48) = N'12345678901234567890123456789012345678'
 *	begin tran
 *	while @i <= @rowcount
 *	begin
 *	    insert into [hash] values (@i, @c)
 *	    set @i += 1
 *	end
 *	commit 
 *
 *	The program below uses standard Berkeley DB to prototype a sharded in-
 *	memory KV-store. It performs this insert very quickly and the idea can
 *      be adapted to a wide range of uses.  Typical insert times ranges 
 *      from 70 to 80 milliseconds, on a dual cpu E5-2690 2.9 GHz server or 
 *      a 2.6 GHz Core i7-3720QM laptop. It uses stock version Berkeley 
 *      DB 6.1, gcc-4.8 and this source file.
 *
 *	To run the insert demonstration:
 *		insert 
 *	To then to read back 100,000 records at random:
 *		insert -R
 *
 *	The power saving features of modern processors often reduces the CPU
 *	clock on an idle system to less than half of its potential. The best
 *	speeds (~70 millisecond for inserts, ~30 millseconds for reads) are
 *	seen when the cores are running at their maximum qualified frequency.
 */

#define _BSD_SOURCE	/* Expose timersub(), perhaps others. */

#include <sys/types.h>
#include <sys/time.h>

#include <errno.h>
#include <assert.h>
#include <ctype.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <unistd.h>

#include <db.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

#define INIT_DBT(dbt, p, sz, fl)	{	\
	memset((dbt), 0, sizeof(DBT));		\
	(dbt)->data = p;			\
	(dbt)->size = (dbt)->ulen = sz;		\
	(dbt)->flags = fl;			\
}

#define MILLION	(1000000)
#define BILLION	(MILLION * 1000)

//#define	KEYSIZE		4
//#define	DATASIZE	48
//#define NKEYS_DEFAULT	100000

/*typedef struct {
	uint32_t key[1];
	uint8_t	data[DATASIZE];
} INSERT;
*/

#define	KEYSIZE		8
#define	DATASIZE	96
#define NKEYS_DEFAULT	1000000//size=(8+96)*8000000=0.84g
#define DB_SCM		0x00100000
typedef struct {
	uint64_t key[1];
	uint8_t	data[DATASIZE];
} INSERT;

//char Datastr[] = "123456789012345678901234567890123456789012345678";
char Datastr[] = "123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456";
int microsleep(int microseconds);

char *ProgName = "ex_insert";

#define	DATABASE	"shard.db"

int	BulkGroupSize = 100;	/* -b# Bulk group size for DB_MULTIPLE_XXX */
int	LogInMem = 1;		/* -L Stores log records in memory only  */
char   *InitString =		/* -I Initialize envs with <DB_CONFIG lines> */
	"set_flags DB_TXN_NOSYNC on\n"
	"set_mp_pagesize 65536\n"
	"set_mp_mtxcount 1\n";
int	NKeys = NKEYS_DEFAULT;		/* -k# Number of records to generate */
int	Pagesize = 65536;		/* -p# Change DB page size. */
int	QueueSize = 100;		/* -q# Change command queue size.*/
int	Read = 0;			/* -r Skip init; read the records */
int	Repeat = 1;
int	NShards = 1;	//int	NShards = 8;		
                    /* -s# Shard the data in this many envs.
					 *  Each shard is in a subdirectory of
					 * the "top" environment home.
					 */

/*
 * This uses a lockless fixed size request-response task queue. Each item is a
 * single pointer which typically contains a command description, the data to be
 * processed, and a place for the return value.
 *
 *	QUEUE *queue_create(int count, flags)
 *	int QUEUE->put(QUEUE *q, void *p)	Add p to q, waiting if full.
 *	int QUEUE->get(QUEUE *q)		Return oldest p put to q.
 *	int QUEUE->close(QUEUE *q)		No more data is coming.
 *
 * While these are lock-free, they are not wait-free. An operation can be
 * delayed by another thread being suspended or killed between the reservation
 * of a slot and the get or put of that slot's value.
 *
 * 	The queue is empty when putpos == getpos.
 *	The queue is full when putpos == getpos + count
 */

typedef unsigned qindex;
struct queue; typedef struct queue QUEUE;
struct queue {
	qindex	  putpos;
	void	**space1[7];	/* for 64 bit addresses, 64 byte lines */
	void	**base;
	void	**end;
	unsigned  count;
	unsigned  flags;
	int	  closed;
	int	 id;

	/* Operations/methods */
	int	(*put)(QUEUE *q, void *p);
	void	*(*get)(QUEUE *q);
	int	(*close)(QUEUE *q);
	
	void	**space2[1];	/* for 64 bit addresses, 64 byte lines */
	qindex   getpos;
};

QUEUE *queue_create(int count, unsigned flags);
int queue_put(QUEUE *q, void *p);
void *queue_get(QUEUE *q);
int queue_single_put(QUEUE *q, void *p);
void *queue_single_get(QUEUE *q);
int queue_close(QUEUE *q);

struct shard;	typedef struct shard SHARD;
struct cmd;	typedef struct cmd CMD;
struct _stats;	typedef struct _stats STATS;

struct _stats {
	int records;		/* # of records inserted or fetched. */
};

struct cmd {
	DBT	key;
	DBT	value;
	void	*bulkpos;
	u_int32_t flags;	/* 0 or DBT_MULTIPLE */
	int	ret;
	int	count;		/* The number of puts in this (bulk) command. */
	int	id;
	struct shard	*shard;
	/*
	 * In general the remainder of this struct would be a variable length
	 * byte array, but for this test case it is fixed, unless using
	 * the bulk interface (DB_MULTIPLE)
	 */
	uint32_t	keyvalue;
	char		datavalue[DATASIZE];
};

struct shard {
	int	id;
	DB_ENV	*dbenv;
	DB	*dbp;
	char	*home;		/* environment home directory. */
	CMD	*cmd;		/* The command currently being built. */
	pthread_t tid;
	struct timeval start, first, end;
	QUEUE	*requests;
	STATS	stats;
};

CMD *Cmds;

int	db_env_init __P((const char *, DB_ENV **));
int	db_init __P((DB_ENV *, DB **));
void	fatal __P((const char *, int, int, ...));
int	hash_key __P((void *, unsigned));
int	main __P((int, char *[]));
void	print_stats __P((void));
int	run_workload __P((SHARD *));
int	usage __P((void));
void   *worker __P((void *));

SHARD	*Shards;		/* Sharded (sub)environments. */
int	CacheGb;
int	CacheBytes;
unsigned EnvFlags = DB_INIT_LOCK | DB_INIT_LOG | DB_INIT_TXN | DB_PRIVATE; //DB_PRIVATE ,DB_SCM added
int	Pages;			/* approximate number of pages in each shard */
int	Quit;			/* Interrupt handling flag. */
struct rusage UsageBegin, UsageEnd;	/* cpu, etc, usage of the workload */

struct timeval Setup, Execute, Finish;
#define	TV_TO_SECS(tvp)	((tvp)->tv_sec + (tvp)->tv_usec / 1000000.0)

/*
 * scale_factor
 *	A helper to getopt(), this supports appending a 'k' or 'm' to a
 *	command line option which commonly is a multiple of 1000 or 1,000,000.
 */
int
scale_factor(const char *scalefactor)
{
	if (toupper(*scalefactor) == 'K')
		return (1000);
	if (toupper(*scalefactor) == 'M')
		return (MILLION);
	return (1);
}

/*
 * insert --
 *	Run a simple threaded application which parallelizes inserts into
 *	a sharded collection of databases
 *
 * Example command lines to run this program:
 *	bash -c 'for ((i=1; i<10; i++)); do insert -s8; done'
 */
int
main(argc, argv)
	int argc;
	char *argv[];
{
	SHARD *shard;
	char *home, *s, *suffix, tempstr[500];
	int ch, i, namelen, ret;
	u_int32_t flags;
	u_int64_t memdemand;
	extern char *optarg;
	extern int errno, optind;

	/* Find the name of this executable. */
	ProgName = strrchr(argv[0], '/');
	if (*ProgName == '/')
		ProgName++;
	home = "DEMODIR";
	while ((ch = getopt(argc, argv, "b:h:I:k:Lp:q:Rr:s:")) != EOF)
		switch (ch) {
		case 'b':
			BulkGroupSize = atoi(optarg);
			if (BulkGroupSize <= 0)
				return (usage());
			break;
		case 'h':
			home = optarg;
			break;
		case 'I':	/* A ';' separated string of DB_CONFIG lines. */
			if (strlen(optarg) == 0)
				InitString = NULL;
			else {
				InitString = calloc(strlen(optarg) + 2, 1);
				for (s = strtok(optarg, ";");
				    s != NULL; s = strtok(NULL, ";")) {
					strcat(InitString, s);
					strcat(InitString, "\n");
					if (strcasestr(s, "set_shm_key") == s)
						EnvFlags |= DB_SYSTEM_MEM;
				}
			}
			break;
		case 'k':
			NKeys = (u_long)strtol(optarg, &suffix, 10);
			NKeys *= scale_factor(suffix);
			if (NKeys < 1 || NKeys > 2000 * MILLION) {
				fprintf(stderr,
			   "The number of keys may range from 1 to 2000M\n");
			   	return (EXIT_FAILURE);
			}
			break;
		case 'L':
			LogInMem = 1;
			break;
		case 'p':
			Pagesize = (int)strtol(optarg, &suffix, 10);
			break;
		case 'q':
			if ((QueueSize = atoi(optarg)) <= 0)
				return (usage());
			break;
		case 'r':
			Repeat = atoi(optarg);
			break;
		case 'R':
			Read = 1;
			InitString = NULL;
			QueueSize *= BulkGroupSize;
			BulkGroupSize = 1;
			break;
		case 's':
			NShards = atoi(optarg);
			if ((NShards = atoi(optarg)) < 1 || NShards > 1000) {
			    fprintf(stderr,
				    "The number of shards may range from 1 to 1000\n");
			    return (EXIT_FAILURE);
			}
			break;
		case '?':
		default:
			return (usage());
		}
	argc -= optind;
	argv += optind;

	/*
	 * Calculate the memory demand, estimating that shards contain
	 * approximately equal fractions of the dataset. The 2.5 multiplier
	 * allows for internal per-record bookkeeping data and 50% full pages.
	 */
	memdemand = MILLION + (2.5 * sizeof(INSERT) * (int64_t)NKeys) / NShards;
	CacheGb = (u_int32_t)(memdemand / (1 << 30));
	CacheBytes = (u_int32_t)(memdemand % (1 << 30));
	Pages = (u_int32_t)(memdemand / Pagesize);

	/* Reprint options from the command line. */
	printf("%s ", ProgName);
	if (LogInMem || Read)
		printf("-%s%s ", LogInMem ? "L" : "", Read ? "R" : "");
	if (NKeys >= MILLION && (NKeys % MILLION) == 0) {
		i = NKeys / MILLION;
		s = "M";
	} else {
		i = NKeys;
		s = "";
	}
	(void)gettimeofday(&Setup, NULL);
	printf("-b%d -k%d%s -p%d -q%d -r %d -s%d @ %s", BulkGroupSize,
	    i, s, Pagesize, QueueSize, Repeat, NShards, ctime(&Setup.tv_sec));
	if (InitString) {
		printf("-I settings written to DB_CONFIG:\n%s", InitString);

		/* Remove previous environment tree if re-initializing. */
		snprintf(tempstr, sizeof(tempstr),
		    "test -d %1$s && rm -r %1$s; mkdir %1$s", home);
		if (system(tempstr) < 0)
			fatal("%s", 1, errno, tempstr);
	}

	/* Create the shards and their environments. */
	namelen = strlen(home) + 10;
	if ((Shards = calloc(NShards, sizeof(Shards[0]))) == NULL)
		fatal("not enough memory for %d shards", errno, 1, NShards);
	for (i = 0, shard = Shards; i != NShards; i++, shard++) {
		shard->id = i;
		shard->requests = queue_create(QueueSize, 0);
		shard->requests->id = i;
		shard->home = malloc(namelen);
		(void)snprintf(shard->home, namelen, "%s/shard%03d", home, i);
		if ((ret = db_env_init(shard->home, &shard->dbenv)) != 0)
			return (EXIT_FAILURE);
		if ((ret = db_init(shard->dbenv, &shard->dbp)) != 0) {
			(void)shard->dbenv->close(shard->dbenv, 0);
			return (EXIT_FAILURE);
		}
	}

	if ((ret = Shards[0].dbenv->get_open_flags(Shards[0].dbenv, &flags)) != 0)
	    	fatal("Could not get environment open flags", ret, 1);
	 printf("%sDataStore: %s%s%s%s%s%s%s%s\n",
		(flags & DB_INIT_CDB) ? "Concurrent " :
		(flags & DB_INIT_TXN) ? "Transactional " : "",
		(flags & DB_CREATE) ? "DB_CREATE " : "",
		(flags & DB_LOCKDOWN) ? "DB_LOCKDOWN " : "",
		(flags & DB_INIT_LOCK) ? "DB_INIT_LOCK " : "",
		(flags & DB_INIT_LOG) ? "DB_INIT_LOG " : "",
		(flags & DB_INIT_MPOOL) ? "DB_INIT_MPOOL " : "",
		(flags & DB_INIT_REP) ? "DB_INIT_REP " : "",
		(flags & DB_SYSTEM_MEM) ? "DB_SYSTEM_MEM " : "",
		(flags & DB_FAILCHK) ? "DB_FAILCHK" : "");

	(void)gettimeofday(&Execute, NULL);
	(void)getrusage(RUSAGE_SELF, &UsageBegin);

	ret = run_workload(Shards);

	(void)gettimeofday(&Finish, NULL);
	(void)getrusage(RUSAGE_SELF, &UsageEnd);
	timersub(&Execute, &Setup, &Setup);
	timersub(&Finish, &Execute, &Execute);
	timersub(&UsageEnd.ru_utime, &UsageBegin.ru_utime,
	    &UsageBegin.ru_utime);
	timersub(&UsageEnd.ru_stime, &UsageBegin.ru_stime,
	    &UsageBegin.ru_stime);

	print_stats();

	for (i = 0; i < NShards; i++) {
		if ((ret = Shards[i].dbp->close(Shards[i].dbp, DB_NOSYNC)) != 0)
			fatal("main could not close db for shard %d",
			    ret, 1, shard->id);
		if ((ret = Shards[i].dbenv->close(Shards[i].dbenv, 0)) != 0)
			fatal("main could not close env for shard %d",
			    ret, 1, shard->id);
	}

	return (EXIT_SUCCESS);
}

/*
 * hash_key	- Hash the key down to an integer, which is needed in the
 *   general case.
 */
inline int
hash_key(data, len)
	void *data;
	unsigned len;
{
	unsigned i, hash;
	u_int8_t *p;

	for (i = 0, hash = 0, p = data; i != len; i++)
		hash ^= p[i];
	return (hash);
}

int
cmd_start(CMD *cmd)
{
	QUEUE *q;
	int ret;

	cmd->ret = EAGAIN;
	q = cmd->shard->requests;
	if ((ret = q->put(q, cmd)) != 0)
		fatal("cannot queue up command for shard %d value %d",
		    ret, 1, cmd->shard->id, cmd->keyvalue);
	return (ret);
}

int
cmd_wait(CMD *cmd)
{
	if (cmd->shard == NULL)
		return (0);
	if (cmd->ret == EAGAIN) {
		sched_yield();
		while (cmd->ret == EAGAIN)
			microsleep(1);
	}
	if (cmd->ret != 0)
		fatal("prior command for first key %d failed",
		    cmd->ret, 1, cmd->keyvalue);
	if (Read) {
		if (memcmp(cmd->value.data, Datastr, DATASIZE) != 0)
			fatal("prior command for key %d returned bad data",
			    cmd->ret, 1, cmd->keyvalue, cmd->value.data);
		if (cmd->keyvalue != *(uint32_t *) cmd->key.data)
			fatal("prior command for key %d returned %d", cmd->ret,
			    1, cmd->keyvalue, *(uint32_t *) cmd->key.data);
	}

	return (1);
}

/*
 * run_workload --
 *	A director thread generates the stream of commands, dispatching each to
 *	the appropriate shard for KV-store processing. Each shard has its own
 *	thread and command request/result queue. Command structures contain the
 *	key dbt, data dbt, flags, return code, and an array for the DBT data
 *	bytes. Usually bulk DBTs are in use, which accumulate records in each
 *	shard's "current" command until it fills up enough to be put onto the
 *	shard's queue. If sending records singly, the DB_MULTIPLE_XXX()
 *	interfaces are not used; a command is queued up immediately.
 */
int
run_workload(SHARD *shards)
{
	CMD *cmd;
	int allocated, completed, started;
	int bulksize, count, dbtflags, i, keyval, ncmds, ret, shard;
	void *retp;

	allocated = completed = started = 0;
	dbtflags = DB_DBT_USERMEM;
	ncmds = QueueSize * NShards;
	/*
	 * Size the DB_MULTIPLE_KEY dbts to allow about BulkGroupSize records
	 * per command sent to the worker threads.
	 */
	if (BulkGroupSize > 1) {
		bulksize = 3 * sizeof(u_int32_t) + BulkGroupSize *
		    (KEYSIZE + DATASIZE + 3 * sizeof(u_int32_t));
		bulksize = ((bulksize + Pagesize - 1) / Pagesize) * Pagesize;
	}
	else
		bulksize = 0;
	Cmds = calloc(ncmds, sizeof(*Cmds));

	for (i = 0; i < ncmds; i++) {
		cmd = &Cmds[i % ncmds];
		if (bulksize) {
			cmd->flags = DB_MULTIPLE_KEY;
			INIT_DBT(&cmd->key,
			    malloc(bulksize), bulksize, dbtflags);
			DB_MULTIPLE_WRITE_INIT(cmd->bulkpos, &cmd->key);
		} else {
			INIT_DBT(&cmd->key, &cmd->keyvalue, KEYSIZE, dbtflags);
			INIT_DBT(&cmd->value,
			    &cmd->datavalue, DATASIZE, dbtflags);
			memmove(cmd->value.data, Datastr, DATASIZE);
			cmd->count = 1;
		}
		cmd->shard = NULL;
	}

	for (i = 0; i != NShards; i++) {
		if ((ret = pthread_create(&Shards[i].tid,
		    NULL, worker, &Shards[i])) != 0)
			fatal("pthread_create of worker %d failed", ret, 1, i);
	}

	count = NKeys * Repeat;
	for (i = 0; i < count; i++) {
		if (Read)
			keyval = 1 + random() % NKeys;
		else
			keyval = 1 + i % NKeys;
		shard = hash_key(&keyval, KEYSIZE) % NShards;
		/*
		 * Start a new command block: always, if not building bulk dbts,
		 * or when using bulk dbts and this shard doesn't have one
		 * pending, being built up enough to queue up to send.
		 */
		if (bulksize == 0 || (cmd = shards[shard].cmd) == NULL) {
alloc_cmd:		cmd = shards[shard].cmd = &Cmds[allocated % ncmds];
			cmd->id = allocated;
			allocated++;
			if (cmd_wait(cmd))
				completed++;
			cmd->shard = &shards[shard];
			if (cmd->flags & DB_MULTIPLE_KEY) {
				cmd->count = 0;
				DB_MULTIPLE_WRITE_INIT(cmd->bulkpos,
				    &cmd->key);
			}
		}
		cmd->keyvalue = keyval;
		if (bulksize == 0) {
			if (Read)
				memcpy(cmd->datavalue, "dummy", 6);
			else
				memcpy(cmd->datavalue, Datastr, DATASIZE);
			cmd_start(cmd);
			started++;
		} else {
			DB_MULTIPLE_KEY_WRITE_NEXT(cmd->bulkpos,
			    &cmd->key, &keyval, KEYSIZE, Datastr, DATASIZE);
			if (cmd->bulkpos == NULL) {
				cmd_start(cmd);
				started++;
				goto alloc_cmd;
			}
			cmd->count++;
		}
	}

	while (started < allocated)
		cmd_start(&Cmds[started++ % ncmds]);

	/* Tell all the threads to stop, then wait for them to exit */
	for (i = 0; i != NShards; i++)
		shards[i].requests->close(shards[i].requests);

	while (completed < allocated) {
		cmd = &Cmds[completed % ncmds];
		cmd_wait(cmd);
		completed++;
		if (cmd->ret != 0)
			fatal("shard %d didn't complete cmd for key %d",
			    cmd->ret, 1, cmd->shard->id, cmd->keyvalue);
	}

	for (i = 0; i < NShards; i++)
		(void)pthread_join(shards[i].tid, &retp);

	return (0);
}


/*
 * worker --
 *	A worker thread which 'owns' this shard and its environment, as
 *	far as the insert benchmark is concerned. The updates are 
 *	transactionally protected according to the settings in the environment.
 */
void *
worker(void *arg)
{
	CMD *cmd;
	DB *dbp;
	DB_ENV *dbenv;
	DB_TXN *txn;
	QUEUE *requests;
	SHARD *shard;
	int i, ret;

	shard = arg;
	dbenv = shard->dbenv;
	dbp = shard->dbp;
	requests = shard->requests;
	(void)gettimeofday(&shard->start, NULL);
	shard->first = shard->start;
	i = 0;
	if ((ret = dbenv->txn_begin(dbenv, NULL, &txn, 0)) != 0)
		fatal("shard %d txn_begin", ret, 1, shard->id);

	while ((cmd = requests->get(requests)) != NULL) {

		if (i == 0)
			(void)gettimeofday(&shard->first, NULL);
		if (Read)
			ret = dbp->get(dbp, txn, &cmd->key, 
			    &cmd->value, cmd->flags);
		else
			ret = dbp->put(dbp, txn, &cmd->key, 
			    &cmd->value, cmd->flags);
		if (ret != 0)
			fatal("shard %d: %s #%d after %d recs keygroup %d", ret,
			    1, shard->id, Read ? "get" : "put",
			    i, shard->stats.records, cmd->keyvalue);
		shard->stats.records += cmd->count;
		cmd->ret = ret;
		i++;
	}

	if ((ret = txn->commit(txn, 0)) != 0)
		fatal("shard %d commit", ret, 1, shard->id);
	(void)gettimeofday(&shard->end, NULL);
	return (NULL);
}

/*
 * print_stats --
 *	Display worker thread statistics.
 */
void
print_stats()
{
	SHARD *shard;
	int i, records;
	float exectime;

	printf("shard records thread rate\n");
	for (i = 0, shard = Shards; i != NShards; i++, shard++) {
		printf("%4d: %7d %10d\n", i, shard->stats.records,
		    (int)(shard->stats.records /
		    (TV_TO_SECS(&shard->end) - TV_TO_SECS(&shard->start))));
	}

	records = NKeys * Repeat;
	exectime = TV_TO_SECS(&Execute);
	printf("%d ops/sec for %d shards %d ops/sec/thread in %.3fs; "
		"cpu %.2fu + %.2fs; shard setup %.3fs\n",
	    (int)(records / exectime), NShards,
	    (int)(records / exectime) / NShards, exectime,
	    TV_TO_SECS(&UsageEnd.ru_utime), TV_TO_SECS(&UsageEnd.ru_stime),
	    TV_TO_SECS(&Setup));
}

/*
 * db_init --
 *	Initialize an environment.
 */
int
db_env_init(home, dbenvp)
	const char *home;
	DB_ENV **dbenvp;
{
	DB_ENV *dbenv;
	FILE *fp;
	char dbconfig[200], tempstr[200];
	unsigned flags, logsize;
	int ret;
	uint64_t txnsize;
    
	*dbenvp = NULL;
	/*
	 * Create the home directory if it does not exist. If -I was specified,
	 * write the config options lines to DB_CONFIG; otherwise try to copy
	 * DB_CONFIG from the parent directory if it does not exist in 
	 * the shard.
	 */
	snprintf(dbconfig, sizeof(dbconfig), "%s/DB_CONFIG", home);
	if (access(home, R_OK | W_OK | X_OK) != 0 &&
	    mkdir(home, S_IRWXU | S_IRWXG | S_IRWXO) != 0)
		fatal("mkdir %s", errno, 1, home);
	if (InitString) {
		if ((fp = fopen(dbconfig, "w")) == NULL)
			fatal("opening %s for writing", 1, errno, dbconfig);
		if (fputs(InitString, fp) < 0)
			fatal("writing %s", 1, errno, dbconfig);
		if (fclose(fp) != 0)
			fatal("closing %s", 1, errno, dbconfig);
	} else {
		snprintf(tempstr, sizeof(tempstr), "%s/../DB_CONFIG", home);
		if (access(tempstr, R_OK ) == 0 &&
		    access(dbconfig, R_OK ) != 0) {
			snprintf(tempstr, sizeof(tempstr),
			    "cp %s/../DB_CONFIG %s", home, home);
			if (system(tempstr) != 0)
				fatal("%s failed", errno, 1, tempstr);
		}
	}

	if ((ret = db_env_create(&dbenv, 0)) != 0) {
		fprintf(stderr,
		    "%s: db_env_create: %s\n", ProgName, db_strerror(ret));
		return (EXIT_FAILURE);
	}

	dbenv->set_errfile(dbenv, stderr);
	dbenv->set_errpfx(dbenv, ProgName);
	if (Read)
		goto skip_config;

	(void)dbenv->set_cachesize(dbenv, CacheGb, CacheBytes, 0);

	if ((ret = dbenv->set_memory_init(dbenv, DB_MEM_LOCK, Pages * 2)) != 0)
		fatal("cannot reserve locks", ret, 1);
	if ((ret = dbenv->set_memory_init(dbenv,
	    DB_MEM_LOCKOBJECT, Pages * 2)) != 0)
		fatal("cannot reserve lockobjects", ret, 1);

	/*
	 * Use "on-disk" logs for transactions larger than ~1GB, to allow
	 * for large inserts.
	 */
	txnsize = (int64_t)(NKeys / NShards) * (sizeof(INSERT) + 100);
	if (!LogInMem || txnsize > BILLION) {
		logsize = MIN(512 * MILLION, txnsize);
		if (logsize < MILLION)
		    logsize = MILLION;
		LogInMem = 0;
		if ((ret = dbenv->set_lg_max(dbenv, logsize)) != 0 ||
		    (ret = dbenv->set_lg_bsize(dbenv, logsize * 2)) != 0)
			fatal("set log size", ret, 1);
		/* Turn off syncing of the log file where it is supported. */

#ifdef DB_LOG_NOSYNC
		if ((ret = dbenv->log_set_config(dbenv, DB_LOG_NOSYNC, 1)) != 0)
			fatal("log_set_config(DB_LOG_NOSYNC)", ret, 1);
#endif

	}
	if ((ret =
	    dbenv->log_set_config(dbenv, DB_LOG_IN_MEMORY, LogInMem)) != 0)
		fatal("set log config(DB_LOG_IN_MEMORY, %d)", ret, 1, LogInMem);

skip_config:
	flags = DB_CREATE | DB_INIT_MPOOL | EnvFlags;

	if ((ret = dbenv->open(dbenv, NULL, flags, 0)) != 0) {   //home->NULL
		dbenv->err(dbenv, ret, NULL);
		(void)dbenv->close(dbenv, 0);
		return (EXIT_FAILURE);
	}

	*dbenvp = dbenv;
	return (0);
}

int
db_init(dbenv, dbpp)
	DB_ENV *dbenv;
	DB **dbpp;
{
	DB *dbp;
	DB_TXN *txn;
	int createflags, ret;

	createflags = DB_CREATE | DB_AUTO_COMMIT;
	*dbpp = NULL;
	txn = NULL;
	DB_MPOOLFILE *mpf = NULL;//added

	/* Create the database. */
	if ((ret = db_create(&dbp, dbenv, 0)) != 0) {
		dbenv->err(dbenv, ret, "db_create");
		(void)dbenv->close(dbenv, 0);
		return (EXIT_FAILURE);
	}

	if ((ret = dbp->set_pagesize(dbp, Pagesize)) != 0) {
		dbp->err(dbp, ret, "set_pagesize");
		goto err;
	}
	if ((ret = dbp->open(dbp,
	    NULL, NULL, DATABASE, DB_BTREE, createflags, 0664)) != 0) {
		dbp->err(dbp, ret, "%s: open", DATABASE);
		goto err;
	}
	if ((ret = dbp->close(dbp, 0)) != 0)
		fatal("db close for transactional support", ret, 1);
	/*
	 * Now that the db has been created durably, reopen it with possibly
	 * non-durable transactions. This matches the "schema-only" durability
	 * mode of the 100,000 record in-memory insert.
	 */
	if ((ret = dbenv->txn_begin(dbenv, NULL, &txn, DB_TXN_SYNC)) != 0)
		fatal("db_init: txn_begin", ret, 1);
	if ((ret = db_create(&dbp, dbenv, 0)) != 0) {
	      dbenv->err(dbenv, ret, "db_create for non-durable transactions");
	      return (EXIT_FAILURE);
	}
	if ((ret = dbp->open(dbp,
	    txn, NULL, DATABASE, DB_BTREE, DB_CREATE, 0664)) != 0)
		fatal("reopen for non-durable transactions", ret, 1);
	mpf = dbp->get_mpf(dbp);  //added
        ret = mpf->set_flags(mpf, DB_MPOOL_NOFILE, 1);  //added
	if (LogInMem && (ret = dbp->set_flags(dbp, DB_TXN_NOT_DURABLE)) != 0)
		fatal("dbp->set_flags(DB_TXN_NOT_DURABLE)", ret, 1);
	if ((ret = txn->commit(txn, 0)) != 0)
		fatal("txn->commit", ret, 1);
err:	
	if (ret == 0)
		*dbpp = dbp;
	else
		(void)dbp->close(dbp, 0);
	return (ret);
}

/*
 * fatal --
 *	Report a fatal error and quit. It prints it into a string buffer
 *	so that the entire message is printed together.
 */
void
fatal(const char *msg, int err, int syserr, ...)
{
	va_list ap;
	char message[1024];

	fflush(stdout);
	va_start(ap, syserr);
	vsnprintf(message, sizeof(message), msg, ap);
	va_end(ap);
	fprintf(stderr,
	    "%s: %s %s\n", ProgName, message, syserr ? db_strerror(err) : "");
	exit(EXIT_FAILURE);
	/* NOTREACHED */
}

/*
 * usage --
 *	Display command line usage message and exit
 */
int
usage()
{
	fflush(stdout);
	(void)fprintf(stderr,
	    "usage: %s [-LR] [-h home]\n"
	    "\t[-I <DB_CONFIG lines for recreating environments>]\n"
	    "\t[-b <bulk group size>]\n"
	    "\t[-k <#keys>]\n"
	    "\t[-p <pagesize>]\n"
	    "\t[-q <queue size>]\n"
	    "\t[-r <repeat count>]\n"
	    "\t[-s <shard count>]\n",
	    ProgName);
	exit(EXIT_FAILURE);
}

int
microsleep(int microseconds)
{
	struct timeval t;
	int ret;

	t.tv_sec = 0;
	t.tv_usec = microseconds;
	ret = select(0, NULL, NULL, NULL, &t);
	return (ret);
}

/*
 * queue_create -
 *	Allocation and initialize a queue in the local heap. The
 *	ring buffer is allocated immediately after the QUEUE struct.
 *	It is empty when put == get. It is full when put == get + count
 */
QUEUE *
queue_create(int count, unsigned flags)
{
	QUEUE	*q;
	
	q = calloc(sizeof(QUEUE) + count * sizeof(void**), 1);
	q->base = (void **)&q[1];
	q->end = q->base + count;
	q->count = count;
	q->flags = flags;
	q->get = queue_single_get;
	q->put = queue_single_put;
	q->close = queue_close;
	return (q);
}

/*
 * queue_single_put -
 *	Single threaded writer version of queue put. Advance the put
 *	pointer, waiting if the next put == get. Then fill in the slot of the
 *	previous put value.
 */
int
queue_single_put(QUEUE *q, void *p)
{
	qindex curr;
	void	**slot;

	curr = q->putpos;
	slot = &q->base[curr % q->count];
	while (*slot != NULL) {
		if (curr >= q->getpos + q->count)
			microsleep(1);
		else
			sched_yield();
	}
	q->putpos = curr + 1;
	assert(*slot == NULL);
	*slot = p;
	return (0);
}

/*
 * queue_single_get -
 *	Single threaded reader version of queue get.
 *	- Wait until the current get slot has a value;
 *	- Fetch that pointer value
 *	- Null out the old slot value, which tells the put
 *		function that the slot can be written to.
 *	- Return the fetched pointer
 */
void *
queue_single_get(QUEUE *q)
{
	qindex curr;
	void	**slot, *val;

	curr = q->getpos;
	slot = &q->base[curr % q->count];
	while ((val = *slot) == NULL) {
		/* Return 'EOF' if the queue is empty and 'closed'. */
		if (curr == q->putpos && q->closed)
			return (NULL);
		/*
		 * Sleep if the queue is empty; otherwise let another thread 
		 * run because a 'putting' thread was caught between advancing 
		 * getpos and writing into the slot.
		 */
		if (curr == q->putpos)
			microsleep(1);
		else
			sched_yield();
	}
	q->getpos = curr + 1;
	*slot = NULL;

	return (val);
}

int
queue_close(QUEUE *q)
{
	q->closed = 1;
	return (0);
}
