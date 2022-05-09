//check given number is perfect number or not
#include<stdio.h>
int main(){
	int i=1,n,sum=0;
	printf("enter the n value :");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	printf("the entered number %d is perfect number ",n);
	else
	printf(" %d this is not a perfect number",n);	
	
	
	return 0;
	}

	

