#include<stdio.h>
#include<string.h>
int main(){
   int len,i;
  char a[100];
  printf("enter a string \n");
  scanf("%s",a);//gets can't use and in scanf & cant use for string
  len=strlen(a); 
  for(i=len-1;i>=0;i--){
  	printf("%c",a[i]);
  }
   return 0;

 }
