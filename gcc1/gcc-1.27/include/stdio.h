#ifndef _STDIO_H
#define _STDIO_H

extern struct _IO_FILE *stderr;
extern struct _IO_FILE *stdout;
typedef struct _IO_FILE FILE;
#define NULL  0
#define EOF  (-1)

FILE *fopen(const char *, const char *);

#endif
