#include <linux/kernel.h>
#include <linux/random.h>

const char* qotdArray[] = {"The smallest deed is better than the greatest intention. \n-John Burroughs", 
"To err is human; to forgive, divine.\n-Alexander Pope", 
"Art doesn't transform. It just plain forms. \n-RoyLichtenstein", 
"The world is round so that friendship may encircle it.\n-Pierre Teilhard de Chardin", 
"To give without any reward, or anynotice, has a special quality of its own. \n-Anne Morrow Lindbergh"};

asmlinkage long sys_qotd(void)
{
	unsigned int rand = 0;
	get_random_bytes(&rand, sizeof(rand));

	rand %= 5;

	printk("\nQuote chosen from array at element: %u\n", rand);

	printk(qotdArray[rand]);
	return 0;
}
