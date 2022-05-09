#include<stdio.h>
int main(){
	char c;
	
	printf("enter the character ");
	scanf("%c",&c);


	if (c>=65&&c<=90){
		c=c+32;
		printf("%c   ",c);
	}
	else{
		c=c-32;
		printf("%c ",c);
	}
	return 0;
}
