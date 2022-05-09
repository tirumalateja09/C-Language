#include<stdio.h>
int main ()
{
	int a;
	int vippass=0;
	printf("enter the number:");
	scanf("%d",&a);
	if ((a <= 70 && a >= 18)|| (vippass==1))
	{
	printf("your age is above 18 and below 70 ,you can drive\n");
	}	
	else
	{
	printf("you are not allowed to drive\n");
	}
	return 0;
}
