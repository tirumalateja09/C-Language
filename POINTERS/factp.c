#include<stdio.h>

int fact(int *a)
        {
            printf("%d ",*a);
            int factorial=1;
            while(*a>1){

                factorial*=*a;
                *a=*a-1;
                }
return(factorial);
        }

        int main()
        {
            int num, factorial,c;
            printf("please enter a number:");
            scanf("%d",&num);
            c=fact(&num);
            printf("factorial value:%d",c);

            return 0;
            }
