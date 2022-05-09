#include<stdio.h>
#include<string.h>
int main(){
	char a[]="hello";
	//char b[]={'w','o','r','l','d'};
	char b[]="world";
	strcat(a,b);
	printf("%s",a);
	return 0;
}
