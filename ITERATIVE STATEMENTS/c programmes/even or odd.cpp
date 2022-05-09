#include<stdio.h>
int main(){
	int a;
	printf("enter the value of a ");
	scanf("%d",&a);
	if(a%2==0){
		printf("entered value is even ");
	}
	else{
		printf("entered value is odd");
	}
	return 0;
}
