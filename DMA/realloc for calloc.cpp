#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,*ptr,i;
	ptr=(int*)calloc(a,sizeof(int));
	ptr[0]=1;
	ptr=(int*)realloc(ptr,3*sizeof(int));
	ptr[1]=2;
	ptr[2]=3;
  for(i=0;i<3;i++){
  	printf("%d",ptr[i]);
  }
	
	
}
