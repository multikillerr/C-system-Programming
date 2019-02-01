#include<stdio.h>
void err_sys(const char* x);
int main(void){
	int c;
	while ((c=getc(stdin))!=EOF)&(x<num)
		if(putc(c,stdout)==EOF)
			err_sys("output error");
		if(ferror(stdin))
			err_sys("input error");
	
		exit(0);
}
void err_sys(const char* x){
	perror(x);
	exit(1);
}
