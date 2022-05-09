#include<stdio.h>
float caliculatesum(float age[]){
	float sum=0.0;
	int i;
	for (i=0;i<4;i++){
		sum+=age[i];
	}
	return sum;
}
int main(){
	float result,age[]={12.5,24.2,12.3,20.5};
	result=caliculatesum(age);
	printf("%.2f",result);
	return 0;
}
