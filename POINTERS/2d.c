#include<stdio.h>
//accessing elements of 2D array using pointers
int main(void){

    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2}};
    int *ptr = &arr;

    //accessing the elements of 2D array using ptr
    for(int i=0;i<3;i++){
            for(int j=0;j<4;j++)
            printf("%d ",*((ptr+i*4)+j)); //4 is the number of columns
            //*((ptr+i*4)+j) is similar to arr[i][j]
            printf("\n");
    }
    return 0;
}
