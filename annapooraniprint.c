
#include <linux/syscalls.h>
#include <linux/kernel.h>

SYSCALL_DEFINE1(annapooraniprint, char*,s)
{
    
    char buf[256];
    long msg= strncpy_from_user(buf, s, sizeof(buf));
    if( msg< 0 || msg== sizeof(buf))
        return -EFAULT;
    printk("Annapoorani printing string:  %s\n", buf);
    return 0;

}