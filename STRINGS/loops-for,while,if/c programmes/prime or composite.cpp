#include<stdio.h>
int main(){
	int i,n,b=1;
	printf("enter the value of n :");
	scanf("%d",&n);
	for (i=2;i<n;i++){
		if(n%i==0){
			b=0;
			break;
		}
	}
	if(b==1){
		printf("this is a prime number ");
	}
	else{
	printf("this is a composite number");
	}
	return 0;
}
