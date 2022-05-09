#include<stdio.h>
int main (){
	int rating;
	printf("enter your rating(1-5):");
	scanf("%d",&rating);
	switch (rating){
		case 1:
			printf("your ratting is 1\n");
			break ;
		case 2:
			printf("your ratting is 2\n");
			break ;
		case 3:
			printf("your ratting is 3\n");
			break ;
		case 4:
			printf("your ratting is 4\n");
			break;
		case 5:
			printf("your ratting is 5\n");
			break;
		default: 
		printf("INVALID RATTING!");
		break;
		
	}
	
return 0;
}
