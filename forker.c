#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
int forksys;
forksys=fork();
printf("Process %d about to fork\n",getpid());
if(fork<0)
{
printf("Cannot fork the operation\n");
}
else if(fork==0)
{
printf("Child Process!!!\n");
}
else if(fork>0)
{
printf("Parent Process\n");
}
else
{
return 0x1234;
}

}
