#ifndef __SYS_H__
#define __SYS_H__

typedef int (*fn_ptr)();

extern int sys_write();
extern int sys_fork();

fn_ptr sys_call_table[] = {sys_write, sys_fork};

/* So we don't have to do any more manual updating.... */
int nr_system_calls = sizeof(sys_call_table)/sizeof(fn_ptr);

#endif