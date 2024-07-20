#ifndef _ERRNO_H
#define _ERRNO_H

#define errno (*__errno_location())
extern int *__errno_location(void);
extern int sys_nerr;
extern const char *const sys_errlist[];

#endif
