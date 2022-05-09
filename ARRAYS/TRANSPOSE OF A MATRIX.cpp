#include<stdio.h>
int main(){
	int i,j,a[3][3],temp;
	printf("enter the matrix-a elements\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("elements-%d %d:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("matrix-a \n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		
	}
	printf("\ntranspose of a matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i<j){
				temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;	
			}
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	
	
	
}
