#include<stdio.h>
#include<string.h>
int main(){
	int i;
 char a[100]="RGUKT";
 for(i=0;a[i]!='\0';i++){
 	if(a[i]>='A' &&a[i]<= 'z'){
 		a[i]=a[i]+32;
	 }
 }
 printf(" %s  is in lower case  ",a);
	return 0;
}
