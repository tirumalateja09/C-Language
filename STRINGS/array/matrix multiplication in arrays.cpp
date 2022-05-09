//matrix multiplication 
#include<stdio.h>
int main(){
	int i,j,k,r1,c1,r2,c2,a[10][10],b[10][10],multi[10][10];
	printf("enter the no. of rows-A:");
	scanf("%d",&r1);
	printf("enter the no. of columns-A: ");
	scanf("%d",&c1);
	printf("enter the no. of rows-B:");
	scanf("%d",&r2);
	printf("enter the no. of columns-B: ");
	scanf("%d",&c2);
	printf("enter the elements in to matrix-A \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("elements-%d %d :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements in to matrix-B \n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("elements-%d %d :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			multi[i][j]=0;
			for(k=0;k<c1;k++){
				multi[i][j]+=a[i][k]*b[k][j];
				
			}
		}
	}
	printf("THE MATRIX MULTIPLICATION OF A*B IS \n");
	for(i=0;i<r1;i++){
		printf("\n");
		for(j=0;j<c2;j++){
			printf("%d\t",multi[i][j]);
		}
	}
	
	
	return 0;
}
