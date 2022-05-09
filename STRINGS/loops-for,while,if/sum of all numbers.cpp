#include<stdio.h>
int main(){
	int n, i,a=0;
	printf("the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a+i;
		printf("the sum of first %d natural numbers is %d  \n",n,a);
	}
	return 0;
}
