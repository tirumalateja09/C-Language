#include <stdio.h>
int main (){
	int a;
	printf("enter your age:");
	scanf("%d",&a);
	if(a>=90){
		printf("yo are above 90,you cannot drive");
	}
	else{
		printf("you can drive\n ");
		
	}
	if (a==50){
		printf(" half century ");
	}
	return 0;
}
