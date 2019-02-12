#include<stdio.h>
#include<sys/types.h>
#include<errno.h>
#include<stdlib.h>
void err_sys(const char* x);
int main(void){
	char *p;
	int n;
	errno = 0;
	n=scanf("%m[a-z][0-9][]",&p);
	if(n==1){
		printf("read: %s\n",p);
		free(p);
	}
	else if(errno!=0){
		err_sys("error in scanf");
	}
	else{
		fprintf(stderr,"No matching strings\n");
	}
}
void err_sys(const char* x){
	perror(x);
	exit(0);
}
