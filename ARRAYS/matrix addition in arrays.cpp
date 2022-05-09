//matrix addition and subtraction 
#include<stdio.h>
int main(){

int i,j,a[3][3],b[3][3],c[3][3];
    printf("enter the elements in to a-matrix \n");
   for(i=0;i<3;i++){
     	for(j=0;j<3;j++){
     	printf("elements-%d %d:",i,j);
		scanf("%d",&a[i][j]);
		}
		}
    printf("enter the elements in to b matrix \n");
    for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	   	printf("elements-%d %d:",i,j);
		scanf("%d",&b[i][j]);
		}
		}
    	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
		}
		for(i=0;i<3;i++){
     	      for(j=0;j<3;j++){
		       printf("%d\t",c[i][j]);
	}
		printf("\n");
	
	}
	return 0;
		
	}
	
	
