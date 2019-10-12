#include <linux/kernel.h>
#include <linux/random.h>

const char* qotdArray[] = {"The smallest deed is better than the greatest intention. \n-John Burroughs", 
"To err is human; to forgive, divine.\n-Alexander Pope", 
"Art doesn't transform. It just plain forms. \n-RoyLichtenstein", 
"The world is round so that friendship may encircle it.\n-Pierre Teilhard de Chardin", 
"To give without any reward, or any notice, has a special quality of its own. \n-Anne Morrow Lindbergh"};

asmlinkage long sys_qotd(void)
{
	//Made rand unsigned to not bother with negatives.
	unsigned int rand = 0;
	
	//Allows rand to get a random seed.
	get_random_bytes(&rand, sizeof(rand));

	//Set rand equal to one of the numbers from 0-4.
	rand %= 5;

	//Output what element the random seed chose.
	printk("\nQuote chosen from array at element: %u\n", rand);

	//Print out that specific quote.
	printk(qotdArray[rand]);
	return 0;
}
