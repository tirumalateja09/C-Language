/* enter number is wheather is lowercase or uppercase by ASCIIvalues*/
#include<stdio.h>
int main (){
	char a;
	printf("enter the character");
	scanf("%chr",&a);
	if(a>=97&&a<=122){
		printf("entered character is lower case ");
	}
	else{
		printf("entered character is not in lower case");
	}
	return 0;
}
