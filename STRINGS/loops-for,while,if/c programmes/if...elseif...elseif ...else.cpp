#include<stdio.h>
int main (){
	int a;
	printf("enter your number:");
	scanf("%d",&a);
	if(a==1){
		printf(" you entered number is 1\n");
	}
	else if (a==2){
		printf("you entered number is 2\n");
	}
	else if (a==3){
		printf("you entered number is 3\n");
	}
	else{
		printf("you entered number is not 1,2,3 ");
	}
	return 0;
}
