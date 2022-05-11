#include <linux/syscalls.h>
#include <linux/kernel.h>
#include<linux/sched.h>
#include<linux/cred.h>
SYSCALL_DEFINE0(annapooraniprocess)
{
    printk("Parent pid: %d",current->parent->pid);
    printk("Current pid: %d",current->pid);
    return 0;
}