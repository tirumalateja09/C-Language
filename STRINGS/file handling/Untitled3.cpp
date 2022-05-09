#include<stdio.h>
struct employee{
	char name[100];
	int age;
	float bs;
};
int main(){
	struct employee emp;
	char text[100]="yes";
	FILE *fp;
	fp=fopen("employee.txt","w");
	while(!(strcmp(text,yes)){
		printf("enter name,age,bs");
		scanf("%s %d %f",emp.name,&emp.age,&emp.bs);
		fprint(fp,"%s \t %d\t %f\n\n\n",emp.name,&emp.age,&emp.bs);
		printf("enter another record\n");
		scanf("%s",text);
	}
	fclose(fp);	
}
