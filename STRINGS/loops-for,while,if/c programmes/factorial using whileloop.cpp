#include<stdio.h>
int main(){
	int i=1,n=7,factorial=1;
	for(i=1;i<=n;i++){
		factorial*=i;
		
	}
	printf("the factorial of %d is %d",n,factorial);
	return 0;
}
