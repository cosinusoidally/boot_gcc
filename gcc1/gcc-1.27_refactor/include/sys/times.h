#ifndef _SYS_TIMES
#define _SYS_TIMES

#define HZ  100

typedef long __kernel_clock_t;

struct tms {
  __kernel_clock_t tms_utime;
  __kernel_clock_t tms_stime;
  __kernel_clock_t tms_cutime;
  __kernel_clock_t tms_cstime;
};

#endif
