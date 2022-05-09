#include <stdio.h>
void findFact(int,int*);
int main()
{
         int fact;
         int num;
		printf(" Input a number : ");
		scanf("%d",&num);
		findFact(num,&fact);
        printf("  %d! is : %d \n\n",num,fact);
         return 0;
        }

void findFact(int n,int *f)
		{
        int i;
	   *f =1;
       for(i=1;i<=n;i++)
       *f=*f*i;
       }

