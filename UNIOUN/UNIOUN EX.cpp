#include<stdio.h>
union student {
	char name[50];
	int id;
	float cgpa;
};
int main(){
	union student s;
	s.name="tirumalateja";
	s.id=1258;
	s.cgpa=10;
	printf("name %s",s.name);
	printf("id %d",s.id);
	printf("cgpa %f",s.cgpa);
	printf("size of unioun variable %d",sizeof(s));
} 
