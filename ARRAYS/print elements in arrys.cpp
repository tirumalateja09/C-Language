//print elements in array
#include<stdio.h>
int main(){
	int arr[10];
	int i;
	printf("read and print elements of an array\n");
	printf("input 10 elements in the array\n");
	for(i=0;i<10;i++){
		printf("elements-%d:",i);
		scanf("%d",&arr[i]);
	}
	printf("print 10 elements in a array are");
	for(i=0;i<10;i++)
	{
		printf("%d   ",arr[i]);
		
	}

	return 0;
	
}
