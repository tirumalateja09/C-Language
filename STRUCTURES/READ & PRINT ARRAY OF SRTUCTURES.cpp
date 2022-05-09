#include<stdio.h>
struct student{
	char name[25];
	char      id[10];
	float    cgpa;
};
int main(){
	int i,n;
	struct student s[3];// array of structure 
	for(i=0;i<3;i++){
		printf("enter name- ");
		scanf("%s",s[i].name);
		printf("enter id-");
		scanf("%s",&s[i].id);
		printf("enter cgpa-");
		scanf("%f",&s[i].cgpa);
		printf("\n");
		}
		for(i=0;i<3;i++){
			printf("%s \n %s \n %.2f \n",s[i].name,s[i].id,s[i].cgpa);
		}
		return 0;
	
}
