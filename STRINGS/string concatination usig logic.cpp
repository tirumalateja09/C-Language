#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	printf("enter the first string :");
	gets(a);
	char b[1000];
	printf("enter the second string:");
	gets(b);
    int len=strlen(a);//size_t can also use instead of int 
	int i;
	for(i=0;i<strlen(b);i++){ // we can use i<=strlen(b)
		a[len+i]=b[i]; //a[strlen(a)+i]=b[i]	can't use
	}
	a[len+i]='\0';   // after, this not need
	printf("%s \n",a);
	return 0;
}
