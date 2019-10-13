#include <linux/kernel.h>
#include <linux/random.h>
#include <stdio.h>
#include <stdlib.h>

const char* quote[] = {"Stay Hungry, Stay Foolish.",
                       "Do you want to sell sugar water for the rest of your life, or do you want to come with me and change the world?",
                       "My favorite things in life don’t cost any money. It’s really clear that the most precious resource we all have is time."}; 

asmlinkage long sys_qotd(void){
        srand((unsigned) time(&t));
        printk(quote[rand()%3]);
	return 0;
}
