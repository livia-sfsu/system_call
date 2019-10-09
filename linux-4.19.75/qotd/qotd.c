#include <linux/kernel.h>
#include <linux/random.h>

const char* quotes[] = {"\"The limits of my language mean the limits of my world.\" - Ludwig Wittgenstein",
				"\"Morality is not properly the doctrine of how we may make ourselves happy, but how we may make ourselves worthy of happiness.\" - Immanuel Kant",
				"\"Life can only be understood backwards; but it must be lived forwards.\" - Soren Kierkegaard",
				"\"To live is to suffer, to survive is to find some meaning in the suffering.\" - Friedrich Nietzsche",
				"\"...the unexamined life is not worth living...”\" - Socrates"};

const int quote_count = 5;

asmlinkage long sys_qotd(void) {

    // get a random integer
    int rand;
    get_random_bytes(&rand, sizeof(rand));

    // make sure rand is positive
    if(rand < 0) {
        rand = -rand;
    }

    // print the quote
    printk(quotes[rand % quote_count]);

	return 0;
}
