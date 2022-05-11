#include <linux/syscalls.h>
#include <linux/kernel.h>

SYSCALL_DEFINE0(annapooranihello)
{
    printk("Hello!\n");
    return 0;
}
