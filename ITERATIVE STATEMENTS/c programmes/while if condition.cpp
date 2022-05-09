#include<stdio.h>
int main(){
	int a=5, i=0;
	while(i<10){
		i++;
		if(i!=a){
			continue;
		}
		else{
			printf("the value of i  is %d",i);
		}
		
	}
	return 0;
	
}
