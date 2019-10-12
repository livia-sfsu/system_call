#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
         long int qotd = syscall(548);
         printf("System call sys_hello returned %ld\n", qotd);
         return 0;
}
