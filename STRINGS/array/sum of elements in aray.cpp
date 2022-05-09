//printing sum of all elements in arrays 
#include<stdio.h>
int main(){
	int arr[5]={10,20,30,40,50};
	int i,sum=0;
	for(i=0;i<5;i++){
		sum+=arr[i];
	}
	printf("the sum of elements in arrays are %d",sum);
	return 0;
}
