#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("enter the threee values ");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?(a>b?a:c):(b>c?b:c) ;
	printf("largest number among %d,%d and %d is %d",a,b,c,max);
	
	return 0;
}
