// finding key value in array using linear search 
#include<stdio.h>
int main(){
	int i,key=20;
	int arr[5]={10,20,30,40,50};
	for (i=0;i<5;i++){
		if(key=arr[i])
		break;
	
	}
	    if(key==arr[i])
		printf("key value found in %d",arr[i]);
		else
		printf("key value is not found");
		
	return 0;
	
}
