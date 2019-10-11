#include <linux/kernel.h>
#include <linux/random.h>

const char* qotdArray[] = 
{
"The smallest deed is better than the greatest
intention. \n-John Burroughs", 

"To err is human; to forgive, divine.
\n-Alexander Pope", 

"Art doesn't transform. It just plain forms. \n-Roy
Lichtenstein", 

"The world is round so that friendship may encircle it.
\n-Pierre Teilhard de Chardin", 

"To give without any reward, or any
notice, has a special quality of its own. \n-Anne Morrow Lindbergh"
}

asmlinkage long sys_qotd(void)
{
    //Generate a random number.
    int random = rand() % 5;

    //Use the random number as an index to print a quote.
    printk(qotdArray[random]);

    return 0;
}