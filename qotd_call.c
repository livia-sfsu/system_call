// Simple program to test the system call after the kernel has been built and booted

#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>

const int qotd = 335;

int main() {
    int return_val = syscall(qotd);
    printf("QOTD system call returned: %d\n", return_val);
    return 0;
}
