#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0;
 char a[100]="hello";
 for(i=0;a[i]!='\0';i++){
 	count++;
 }
 printf(" length of the string is %d",count);
	return 0;
}
