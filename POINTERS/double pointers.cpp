#include<stdio.h>
int main(){
	int a=10;
	printf("value of a before pointers :%d\n",a);
	int *ptr1;
	ptr1=&a;
	*ptr1=20;
	int **ptr2;
	ptr2=&ptr1;
	**ptr2=30;
	printf("value of a after pointers is :%d",a);
	
}
