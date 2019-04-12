#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{ 
	printf("Hello, %s",argv[1]);
	for(int i = 3; i <= 7; ++i)
		printf("\nrunning...\n");
}

