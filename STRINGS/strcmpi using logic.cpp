#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int i,found=0;
	char a[10]="RGUKT";
	char b[10]="rgukt";
	for(i=0;a[i]!='\0';i++){
		if(toupper(b[i])==toupper(a[i]))
	     found=1;
	     break;
	}
	if(!found){
				printf(" They are not equal ");
	}
	else{
	  printf("They are equal");
	}

	return 0;
	}
