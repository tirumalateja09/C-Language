#include<stdio.h>
int main(){
	int a=10;
	int*p;
	p=&a;
	printf(" value of a is :%d \n",a);
	printf("value of  variable *p  is :%d \n",*p);
	printf(" address of varibable a is :%x \n",p);
}
