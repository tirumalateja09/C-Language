#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 value \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d is the greatest ",a);
	} 
	if (b>a&&b>c){
		printf("%d is the greatest  ",b);
		
	}
	if (c>a&&c>b){
		printf(" %d is the greatest ",c);
	}
	return 0;
}
