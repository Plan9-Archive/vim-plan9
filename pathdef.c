/* pathdef.c */
#include "vim.h"
char_u *default_vim_dir = (char_u *)"/sys/lib/vim";
char_u *default_vimruntime_dir = (char_u *)"/sys/lib/vim/vimfiles";
char_u *all_cflags = (char_u *)"pcc -c -D_POSIX_SOURCE -DPLAN9 -D_PLAN9_SOURCE -Iproto";
char_u *all_lflags = (char_u *)"pcc -o 8.vim";
char_u *compiled_user = (char_u *)"mischief";
char_u *compiled_sys = (char_u *)"mu";
