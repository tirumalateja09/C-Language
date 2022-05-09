#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[]="rgukt";
	int i;
	while(b[i]!='\0'){
		a[i]=b[i];
		i++;
	}
	a[i]='\0';
	printf("copied string is %s",a);
	return 0;

}
