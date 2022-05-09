#include<stdio.h>
int main(){
	char name[10];
	printf("enter the name:");//ex:tirumala teja is a very good boy ,etc.
	gets(name);//using gets instead of scanf we print no. of characters in a string 
	printf("%s",name);//no need to use %s 2 times
	return 0;
}
