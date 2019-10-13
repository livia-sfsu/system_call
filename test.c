#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
         long int amma = syscall(436);
         printf("System call qotd returned %ld\n", amma);
         return 0;
}
