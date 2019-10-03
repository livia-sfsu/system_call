# Add a System Call to the Linux kernel

You will create a new system call and add it to the Linux kernel. 

The new system call is called qotd, which stands for quote of the day. 

qotd will randomly select a famous quote from a set of famous quotes.

find your own quotes and add them to a static array. simple. examples:

"Don't go around saying the world owes you a living.  The world owes you nothing.  It was here first. \n-- Mark Twain"
"You miss 100% of the shots you dont take - wayne gretzkY - \nMichael Scott"


## Guidance

There are one thousand and one tutorials (at least) that shows you how to go about it. Find one you like and follow it. 

The process goes like this:

- Download the linux kernel and extract it. 
- Modify the kernel
-- Add the system call entry to arch/x86/entry/syscalls/syscall_64.tbl (assuming a 64 bit version)
-- Write the C code that implements this function. kernel/sys.c works. 
You can also create your own C file (make sure you add it to the build). 
Look for SYSCALL_DEFINE macro. 
-- Create a declaration for your system call in include/linux/syscalls.h . Remember, it's only the declaration. The function is defined in the step above.
-- Compile the kernel, generate the image. 
- Test the new system call
-- Create a C program that calls the new system call. 

## Pro-tip

- You need a machine running Linux for this project. Windows will not help you. 
- You don't have to replace Windows with Linux if you don't want to, use a virtual machine instead. 
- I recommend using qemm since it is free, lightweight and easy to configure. Find a tutorial that uses qemm. Those are the best.
- Really, there's a ton of tutorials. Go read them. 

 
## Turning in the assignment

- Follow the instructions above.
- Fork this repo to your github (read the Github tutorial if you haven't already.) 
- Add the files you changed to the repo, with its directories and all.
- Send me a pull request (again, see the Github tutorial.) I will give you feedback and grade you based on your pull requests.


## Before I go...

Yes, this is a bit complicated, but I know you can do this. Yes, I do. You are the very best, my little ones. YOU CAN DO THIS. 

