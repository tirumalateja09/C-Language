#include<stdio.h>
#include<string.h>
int main(){
	char a[]="hello";
	char b[10];
	strcpy(b,a);
	printf("copied string : %s",b);
}
