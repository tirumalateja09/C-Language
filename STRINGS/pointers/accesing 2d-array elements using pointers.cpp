#include<stdio.h>
int main(){
	int i,j;
	int a[3][4]={{1,2,3,4},{6,7,8,9},{5,4,2,1}};
	int *ptr=&a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf(" %d",*(ptr+i*4)+j);
			
		}
		printf("\n");
	}
}
