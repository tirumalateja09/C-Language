/* this is my first c programme and this is the basic structure 
of this c programme */ 
#include <stdio.h>
#define MAX 20
int total=0;
int add(int a,int b);
int main() 
{
	int a=10,b=15;
	printf("hello\n");
	total=add(a,b);
	printf("result: %d \n",total);
	return 0;  
}
int add(int a,int b)
{
return (a+b+MAX);
}


