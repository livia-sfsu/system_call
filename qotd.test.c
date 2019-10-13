#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main() {
	long int qotd = syscall(333);
	printf("System call sys_qotd returned %ld\n", qotd);
	return 0;
}
