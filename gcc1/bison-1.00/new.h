/* Storage allocation interface for bison,
   Copyright (C) 1984 Bob Corbett and Free Software Foundation, Inc.

BISON is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY.  No author or distributor accepts responsibility to anyone
for the consequences of using it or for whether it serves any
particular purpose or works at all, unless he says so in writing.
Refer to the BISON General Public License for full details.

Everyone is granted permission to copy, modify and redistribute BISON,
but only under the conditions described in the BISON General Public
License.  A copy of this license is supposed to have been given to you
along with BISON so you can know your rights and responsibilities.  It
should be in a file named COPYING.  Among other things, the copyright
notice and this notice must be preserved on all copies.

 In other words, you are welcome to use, share and improve this program.
 You are forbidden to forbid anyone else to use, share and improve
 what you give them.   Help stamp out software-hoarding!  */

#define	NEW(t)		((t *) allocate((unsigned) sizeof(t)))
#define	NEW2(n, t)	((t *) allocate((unsigned) ((n) * sizeof(t))))
/* ljw HACK fix
#define	FREE(x)		(x && free((char *) (x)))
*/
#define	FREE(x)		(free((char *) (x)))

extern	char *allocate();
