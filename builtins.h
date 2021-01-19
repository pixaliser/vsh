#ifndef _RI_SH_BUILTINS_H_
#define _RI_SH_BUILTINS_H_

typedef struct v_sh_builtin_t
{
    char *name;
    int (*builtin)(char **argv);
} v_sh_builtin;

#endif //_RI_SH_BUILTINS_H_
