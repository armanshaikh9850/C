// Creating a Child Process Without Terminating the Parent Process (Giving Control to Child and then to Parent Again)
#include<unistd.h>
#include<stdio.h>
 int main(void) // We Want to Return Statement We Use (void) 
{
  int f;
  char *binaryPath="/bin/ls"; // Path
  char *arg1 = "-lh"; // Path
  char *arg2 = "/home"; // Path
  printf("Creating a child process with fork...\n");
  fork(); // Creating Process
  sleep(5); // Parent Process goes in sleep for 5 seconds (Child Process has the Control for 5 seconds)
  printf("Parent process is sleeping for 5 seconds \n");
  execl(binaryPath,binaryPath,arg1,arg2,NULL); //Listing the Paths
  printf("Sleep is now over \n");
  return 0;
}
