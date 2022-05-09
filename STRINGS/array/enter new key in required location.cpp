//enter a new element in required location in a array 
#include<stdio.h>
int main(){
	int arr[100],n,i,key,loc;
	printf("enter the  size of an array: ");
	scanf("%d",&n);
	printf("Enter the elements in to the array\n  ");
	for(i=0;i<n;i++){
		printf("elements-%d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("print the entered elements \n ");
	for(i=0;i<n;i++){
		printf("%d  \n",arr[i]);
	}
	printf("enter the new element in array :");
	scanf("%d",&key);
	printf("enter the desired location to enter the new element :");
	scanf("%d",&loc);
	for(i=n-1;i>=loc;i--){
		arr[i+1]=arr[i];
		arr[loc]=key;
		
	}
	printf("print the new array list \n");
	for(i=0;i<=n;i++){
		printf("%d ,",arr[i]);
	}
	
	
	
	return 0;
}
