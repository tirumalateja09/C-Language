#include<stdio.h>
#include<string.h>
int main(){
	char a[]="rgukt";
	int i;
	while(a[i]!='\0'){
		if(a[i]>='a'&&a[i]<='z')
		a[i]-=32;
		i++;
	}
	printf("%s is in uppercase",a);
	return 0;
}
