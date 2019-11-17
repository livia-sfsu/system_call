#include <linux/kernel.h>
asmlinkage long sys_qotd(void){
    char * quotes[] = {
        "Spread love everywhere you go. Let no one ever come to you without leaving happier.'-Mother Teresa\n",
        "Always rember that you are absolutely unique. Just like everyone else.'-Margaret Mead'\n" 
   
    };
    int quotesnum = *(&quotes+1)-quotes;
    int i = 0;
    for(;i<quotesnum;i++){
	    printk("quote: %s",quotes[i]); 
    }
    return 0;   
}
