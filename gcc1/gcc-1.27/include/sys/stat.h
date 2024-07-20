#ifndef _SYS_STAT_H
#define _SYS_STAT_H

struct stat {
  unsigned long   st_dev;
  unsigned long   __st_dev;
  unsigned int    __pad1;
  unsigned int    st_ino;
  unsigned int    st_mode;
  unsigned int    st_nlink;
  unsigned int    st_uid;
  unsigned int    st_gid;
  unsigned long   st_rdev;
  unsigned long   __st_rdev;
  unsigned long   __pad2;
  long            st_size;
  int             st_blksize;
  int             st_blocks;
  unsigned int    st_atime;
  unsigned int    __st_atime;
  unsigned int    st_mtime;
  unsigned int    __st_mtime;
  unsigned int    st_ctime;
  unsigned int    __st_ctime;
  int             __pad3;
  int             __pad4;
};

#define S_IFREG  0x8000
#define S_IFMT   0xf000

#endif
