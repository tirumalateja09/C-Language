#include<stdio.h>
int main(){
	int i;
	printf("enter the value of i:");
	scanf("%d",&i);
	do{
		printf("the value of i is %d \n",i+1);
		if(i==4){
		break;	
		}
		i++;
	}while(i<10);
	return 0;
}
