#include <linux/kernel.h>
#include <linux/linkage.h>
#include <stdlib.h>

asmlinkage long sys_qotd(int random )
{
	const char *quoteSet[] ={
	"sucess is going from failure to failure",
	"live the questions now",
	"be somebody who makes everybody feel like somebody",
	"enjoy the litte thing",
	"Stop looking for happiness in the same place you lost it",
	"everyday is a fresh start",
	"train your mind to see the good in every situation",
	}
	const size_t quoteCount = sizeof( quoteSet ) / sizeof(quoteSet[0]);
	printk("%s\n", quoteSet[random % quoteCount] );
	return 0;
}
