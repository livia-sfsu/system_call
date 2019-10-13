#include <linux/kernel.h>

 asmlinkage long sys_hello(void){
        printk(“Your limitation—it's only your imagination.\n”);
        return 0;
 }