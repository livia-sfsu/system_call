#include <linux/stdio.h>
#include <linux/kernel.h>
#include <linux/random.h>
#include <linux/unistd.h>

int main()
{
	long int code = syscall(548);
	printf("System call #548 called for QOTD and returned: %ld\n", code);
	return 0;
}