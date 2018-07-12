#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
	int forker;
	forker=fork(); //Used as an child process creation attempt.
	if(forker<=-1)
	{
		printf("Parent Process");
	}
	else
	{
		printf("Child Process created\n");
	}

}
