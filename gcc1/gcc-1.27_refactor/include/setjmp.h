#ifndef _SETJMP_H
#define _SETJMP_H

struct __jmp_buf_tag
{
  int _t[39];
};

typedef struct __jmp_buf_tag jmp_buf[1];

#endif
