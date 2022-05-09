#include<stdio.h>
#include<stdlib.h>
struct course{
	char name[30];
	int marks;
};
int main(){
	int n,i;
	struct course *ptr;
	printf("enter the total subjects:");
	scanf("%d",&n);
	ptr=(struct course *)malloc(n*sizeof(struct course));
	for(i=0;i<n;i++){
		printf("enter subject name and marks:");
		scanf("%s %d",(ptr+i)->name,&(ptr+i)->marks);
	}
	printf("diplay details \n");
	for(i=0;i<n;i++){
		printf("%s \t %d\n",(ptr+i)->name,(ptr+i)->marks);
	}
}

