#include<stdio.h>
#include<string.h>
int main(){
	char a[]="welcome";
	char b[]="WELCOME";
	int compare;
	compare=strcmp(a,b);
	if(compare>0)
	printf("%s > %s ",a,b);
	else if(compare<0)
	printf("%s < %s",a,b);
	else if(compare=0)
	printf("%s = %s ",a,b);
	return 0;
}
