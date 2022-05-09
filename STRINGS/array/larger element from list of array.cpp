// finding larger elements from a list of array 
#include<stdio.h>
int main(){
    int arr[9]={2,3,5,1,4,100,55,46,1};
	int i,large;
	large=arr[0];
	for(i=1;i<9;i++){
		if(arr[i]>large)
		large=arr[i];
	}
	printf("larger element from the list is %d",large);
	return 0;
}
