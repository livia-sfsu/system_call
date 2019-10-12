#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
    const int random = rand();
    long int qotd = syscall(548, random);
    printf("%d\n", qotd);
    return 0
}