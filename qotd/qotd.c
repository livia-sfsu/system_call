#include <linux/random.h> //include linux libraries bc C ones wont work
#include <linux/kernel.h>

asmlinkage long sys_qotd(void) {

  	unsigned int i =0; 
	get_random_bytes(&i, sizeof(i)); //according to user Iggrossi on linuxquestions.org, this is how you generate a random number
	i %=4; //kernel equivalent to module function
	

  	const char* q[] = {
	"One of the lessons that I grew up with was to always stay true to yourself and never let what somebody else says distract you from your goals. And so when I hear about negative and false attacks, I really don’t invest any energy in them, because I know who I am - M. Obama",
  "Don’t feel stupid if you don’t like what everyone else pretends to love. - Emma Watson", 
  "You can’t just sit there and wait for people to give you that golden dream. You’ve got to get out there and make it happen for yourself. - Diana Ross",
	"Failure is a great teacher and, if you are open to it, every mistake has a lesson to offer. - Oprah", 
  };
 
	printk(q[i]);
 
	return 0;
}
