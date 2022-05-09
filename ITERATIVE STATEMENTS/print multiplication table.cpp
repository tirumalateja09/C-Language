// print multiplication table 
#include<stdio.h>
int main(){
	printf("multiplication of given n number");
	int i,n;
	printf("enter the value   of n ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d*%d%=%d \n",n,i,(n*i));
	}
	return 0;
	
}
