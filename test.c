#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(){


const int i = rand() % 4;
long int sys = syscall(335, i);
printf("System call sys_hello returned %ld", sys);
return 0;

}
