#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main(void) {
	
	int qotd = syscall(335);
	return printf("Return value: %d", qotd);
}
