#include <linux/kernel.h>
#include <linux/random.h>
#include <stdio.h>
#include <stdlib.h>

const char* quotes[] = { "I try to create sympathy for my characters, then turn the monsters loose. -Stephen King", "Prose is architecture, not interior decoration. -Ernest Hemingway", "it's none of their business that you have to learn. Let them think you were born that way. -Ernest Hemingway", "Most writers regard the truth as their most valuabl;e possession, and therfore are most economical in its use. -Mark Twain" } 

asmlinkage long sys_qotd(void) {
	srand((unsigned) time(&t));
	printk(quotes[rand()%4]);
	return 0; 
}
