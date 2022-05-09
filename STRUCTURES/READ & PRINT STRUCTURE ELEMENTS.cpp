#include<stdio.h>
struct studentdata{
	char name[25];
	int id;
	float cgpa;
};
int  main(){
	struct studentdata s;
	printf("Enter Student Details\n ");
	printf("Enter Student Name: ");
	scanf("%s",s.name);
	printf("Enter Student ID:");
	scanf("%d",&s.id);
	printf("Enter Student CGPA :");
	scanf("%f",&s.cgpa);
	printf("%s \n %d \n %f ",s.name,s.id,s.cgpa);
	return 0;

	
	}
