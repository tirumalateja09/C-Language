/* print given number is even or odd */
#include <stdio.h>
int main(){
	int a,b ;
	printf("enter the number :");
	scanf("%d",&a);
	
	if(a%2==0){
		printf(" is an even number ");
		
	}
	else {
		printf(" is an odd number ");
	}
	return 0;
}
