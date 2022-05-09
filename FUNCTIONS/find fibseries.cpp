#include<stdio.h>//fibseries up to range
int fibseries(long int z);
int main(){
	long int n;
	printf("enter the range:");
	scanf("%d",&n);
	fibseries(n);
	//printf("%d",fib);//finding single term use printf in separte
}
int fibseries( long int z){
	int a=0,b=1,c,i;
	for(i=0;i<z;i++){
		printf("%d,",a);
		c=a+b;
		b=a;
		a=c;
	}
//	return a;
	
}
