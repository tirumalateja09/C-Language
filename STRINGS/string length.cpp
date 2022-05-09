#include<stdio.h>
#include<string.h>//for strlen   keyword use this header file
int main(){
	char str[20];
	size_t len;//size_t is keyword means unsigned int 
	printf("enter a string :");
	gets(str);
	len=strlen(str);
	printf("the stringh length of '%s' is '%d'",str,len);//use formate operatores in single quotes 
	return 0;
	
}
