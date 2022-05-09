#include<stdio.h>
int main(){
	int i,n,arr[10],key;
	printf("enter the size :");
    scanf("%d",&n);
	printf("enter elements:\n");
    for(i=0;i<n;i++){
	printf("elements-%d:",i);
	scanf("%d",&arr[i]);
    }	
    printf(" enter the key value:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
	{
	if(key==arr[i])
	break;
	
    }
    if(key==arr[i])
	printf(" Entered value  %d is found at index %d",key,i);
	else
	printf(" Element is not found"); 
	return 0;

}
