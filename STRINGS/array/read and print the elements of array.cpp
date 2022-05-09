//read and print the elements in array 
#include<stdio.h>
int main(){
	int arr[5];
	int i;
	printf("Enter the elements of array list \n ");
	for (i=0;i<5;i++){
		printf("element- %d :",i);
		scanf("%d",&arr[i]);
		
	}
	printf("The elements in array are \n ");
	for(i=0;i<5;i++){
		printf("%d \n",arr[i]);
	}
	return 0;
}
