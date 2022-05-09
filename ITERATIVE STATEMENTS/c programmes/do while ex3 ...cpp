#include<stdio.h>
int main (){
	int i=0;
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	do{
		printf("the number is %d",i);
		i++;
	}while(i<n);
	return 0;
	
}
