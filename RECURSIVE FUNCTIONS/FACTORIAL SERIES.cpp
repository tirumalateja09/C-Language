#include<stdio.h>
int fact(int x);
int main(){
	int i,fv,n;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("%d",n);
	printf("!");
	printf("=");
	fv=fact(n);
	printf("%d",fv);
}
int fact(int x){
	if(x==1)
	return 1;
	else
	return x*fact(x-1);
	
}
