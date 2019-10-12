#include <linux/kernel.h>
#include <linux/random.h>
int rand;
char* quotes[] = {"\"The greatest glory in living lies not in never falling, but in rising every time we fall.\" -Nelson Mandela\n", "\"The way to get started is to quit talking and begin doing.\" -Walt Disney\n", "\"Your time is limited, so don't waste it living someone else's life. Don't be trapped by dogma – which is living with the results of other people's thinking.\" -Steve Jobs\n", "\"If life were predictable it would cease to be life, and be without flavor.\" -Eleanor Roosevelt\n"};

asmlinkage long qotd(void)
{
	get_random_bytes(&rand, sizeof(rand));
	if(rand < 0){
		rand = -rand;
	}
	printk(quotes[rand%4]);

        return 0;
}
