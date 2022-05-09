//binary search in arrays 
#include<stdio.h>
int main(){
	int first,last,middle,search,i,n,found;
	int arr[n];
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++){
		printf("elements-%d:",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the search element :");
	scanf("%d",&search );
	first=0;
	last=n-1;
	found=0;
	while(first<=last){
		middle=(first+last)/2;
		if(search<arr[middle]){
			last=middle-1;
		}
		else if(search>arr[middle]){
			first=middle+1;
		}
		else if (search=arr[middle]){
			printf("the element found at index %d",i);
			found=1;
			break;
		}
		}
		if (!found){
		printf("the element not found ");
		}
	return 0;
}
