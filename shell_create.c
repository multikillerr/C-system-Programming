#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#define MAXLINE 4096
void err_sys(const char* x);
int main(void){
	char	buf[MAXLINE];
	int 	pid;
	int	status;
	pid  = 	getpid();
	printf("Stay polite and say Hi! Cryptrojan here ");
	while(fgets(buf,MAXLINE,stdin)!=NULL){
		if(buf[strlen(buf) - 1]	= "\n")
			buf[strlen(buf) - 1]=0;
		if((pid=fork())<0){
			err_sys("fork error");
		}
		else if(pid==0){
			execlp(buf,buf,(char *)0);
			fprintf("Could not execute: %s",buf);
			exit(127);
		}
		if ((pid=waitpid(pid,&status,0))<0)
			err_sys("waitpid error");
			printf("Stay polite and say Hi! Cryptrojan here ");
			}
			exit(0);
			}
void err_sys(const char* x){
perror(x);
exit(0);
}
