// Creating a Child Process Using Fork() & Displaying Parent and Child Process ID
#include<stdio.h>
#include<sys/types.h> // System Call Oriented Variables
#include<unistd.h> // System call Oriented Functions
   void forkexample()
 {
   if(fork() == 0) // Child Process because Return Value Zero 
  {
    printf("Hello World From Child Class \n");
    printf("Child Process id is : %d \n",getpid());
  }
   else if(fork() > 0) // Parent Process because Return Non-Zero
  {
    printf("Hi from Parent! \n");
    printf("Parent Process id is %d \n",getpid());
  }
}
  int main()
{
  forkexample();
  return 0;
}
