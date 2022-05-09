#include<stdio.h>
int main(){
	float tax=0,num;
	printf("enter the value of your amount");
	scanf("%f",&num);
	if (num>=25000 && num<=50000){
		tax=tax+0.05*(num-25000);
	}
	else if (num>=50000 && num<=75000){
		tax=tax+0.15*(num-50000);
	}
    else if (num>=75000 && num<=100000){
		tax=tax+0.30*(num-75000);
	}
    else if (num>=100000){
		 tax=tax+0.45*(num-100000);
	}
	printf("you net income tax to be paid by this 26th of the month is %f",tax);
	return 0;
	
	
}
