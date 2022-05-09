#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	printf("enter two strings:\n");
	gets(a);
	gets(b);
	int i;
	int temp=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=b[i])
		temp=1;
	     break;
		}
		if(!temp)
		printf("%s  and %s are equal strings",a,b);
		else
		printf("%s not  %s are not equal strings",a,b);
	
	return 0;
}
