#include<stdio.h>
int main(){
	int rating;
	printf("enter your  ratting (1-5)");
	scanf("%d",&rating);
	
	if(rating==1){
		printf("your rating is %d out of 5",rating);
	}
    if(rating==2){
		printf("your rating is %d out of 5",rating);
	}
    if (rating==3){
		printf("your rating is 3");
	}
	if (rating==4){
		printf("your rating is 4");
		
	}
	if(rating==5){
		printf("your rating is 5");
	}
	else {
		printf("INVALID RATING");
	}
	return 0;
}
