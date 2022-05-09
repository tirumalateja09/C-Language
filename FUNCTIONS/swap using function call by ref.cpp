#include<stdio.h>
int swapnum(int *x,int *y)// x,y acts as a pointers and holding address by *
{
	int temp;
	temp= *x;
	*x=*y;
	*y=temp;
	return temp;
}
int main(){
	int a=10,b=20;
	printf("Elements before swapping:");
	printf("%d %d\n",a,b);
	swapnum( &a,&b);//calling function by reference using & address 
	printf("Elements after swapping :");
	printf("%d %d",a,b);
}
