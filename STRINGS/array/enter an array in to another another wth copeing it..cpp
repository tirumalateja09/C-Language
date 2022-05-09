//Enter an array into another array 
#include<stdio.h>
int main(){
	
	int arr1[100],i,arr,loc,m,n;
		printf("enter the size :");
	    scanf("%d",&m);
	int arr2[100];
	   printf("enter the size :");
	   scanf("%d",&n);

		printf("enter the elements into the array \n");
	for(i=0;i<m;i++){
		printf("elements-%d :",i);
		scanf("%d",&arr1[i]);
		}
	for(i=0;i<n;i++){
		printf("elements-%d :",i);
		scanf("%d",&arr2[i]);
	}
		printf("enter the location to enter arr2 to arr1 \n");
		scanf("%d",&loc);
	for(i=m-1;i>=loc;i--){
		arr1[i+n]=arr1[i];
		
	}
	for(i=0;i<3;i++){
		arr2[loc+i]=arr2[i];
	}
	printf("print the new array ");
	for(i=0;i<=m;i++){
		printf("%d,",arr1[i]);
	}
	return 0;
	}
