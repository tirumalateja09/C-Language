#include<stdio.h>
int swap(int *x,int *y); //function call by reference by pointers 
int main(){
	int a=10,b=20;
	printf("values before swapping\n");
   printf(" a=%d,b=%d",a,b);
   printf("\n");
   swap(&a,&b);// in function call passing address/reference (&a,&b) of variable instead of value(a,b)
   printf("values after swapping\n");
   printf("a=%d,b=%d",a,b);
   }
   int swap(int *x,int *y)// int *a,int *b
   {
   	int temp;
	temp= *x;
   	 *x=  *y;
   	 *y= temp;
   	return temp;
   	
   }
