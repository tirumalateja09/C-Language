#include<stdio.h>
struct employee{
	int eno;
	char ename[20];
	float esal; 
};
int  main(){
	struct employee e={ 1258,"Tirumala_Teja",100000};
	//e.eno=1258;
	//e.ename ="Tirumala_Teja";
	//e.esal=100000;
	printf(" Employee Number :%d\n",e.eno);
	printf(" Employee Name : %s\n",e.ename);
	printf(" Employee Salary :%f\n",e.esal);
}
