#include<stdio.h>
int increment(int x){
	x=x+1;
	return x;
}
int main(){
	int a=10;
	int b=increment(a);
	printf("%d",b);
}
