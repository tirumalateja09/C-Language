#include<stdio.h>
int main (){
	int i=1,sum=0,n=10;
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("the sum of 1-10 numbers is %d",sum);
	return 0;
}
