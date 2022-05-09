#include<stdio.h>
int main(){
	char a[10];
	printf("enter your name :");//ex:tirumala teja 
	scanf("%s",a);
	printf("%s %s",a);//here %s allocates only one character after space it require another %s 
}
