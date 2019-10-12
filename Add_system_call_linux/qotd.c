#include<linux/kernel.h>
#include<time.h>
#include<stdlib>
#include<stdio.h>

asmlikage long sys_qotd(void){
int a=0;
int max =20;
int min=1;

srand((unsigned)time(NULL));

a= (rand()%(max-min+1))+min;

if(a==1){

printk("I Have a Dream\n ---Martin Luther")
return 0;


}else if(a==3){

printk("The greatest glory in living lies not in never falling, but in rising every time we fall\n ---Nelson Mandela")
return;

}

else if(a==5)

{
printk("The way to get started is to quit talking and begin doing\n ---Walt Disney")
return 0;

}else if(a==7){

printk("Your time is limited, so don't waste it living someone else's life. Don't be trapped by dogma – which is living with the results of other people's thinking.\n -Steve Jobs")
return 0;

}else if(a==9){

printk("The greatest glory in living lies not in never falling, but in rising every time we fall\n ---Nelson Mandela")
return 0;

}else if(a==11){

printk("If life were predictable it would cease to be life, and be without flavor.\n ---Eleanor Roosevelt")
return 0;

}else if(a==13){

printk("If you look at what you have in life, you'll always have more. If you look at what you don't have in life, you'll never have enough.\n -Oprah Winfrey")
return 0;

}else if(a==15){

printk("If you set your goals ridiculously high and it's a failure, you will fail above everyone else's success.\n ---James Cameron")
return 0;

}else if(a==17){

printk("Life is what happens when you're busy making other plans.\n ---John Lennon")
return 0;

}else if(a==19){

printk("Revolutions are the locomotives of history.\n ---Karl Marx")
return 0;

}else{
printk("A small body of determined spirits fired by an unquenchable faith in their mission can alter the course of history.\n ---Mahatma Gandhi")


}






}
