//sum of entered number 
#include<stdio.h>
int main(){
	int i,n,sum=0,temp;
	printf("enter the value ");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		i=n%10;
		sum+=i;
		n=n/10;
	}
	printf("sum %d = %d",temp,sum);
	return 0;
}
