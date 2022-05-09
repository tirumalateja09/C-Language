#include<stdio.h>
int main (){
	int chem,maths,phy;
	float total;
	printf("Enter your chem marks : \n",chem);
	scanf("%d",&chem);
	printf("enter your maths marks :\n",maths);
	scanf("%d",&maths);
	printf("enter your phy marks:\n",phy);
	scanf("%d",&phy);
	total=(chem+maths+phy)/3;
	if( total<=40||chem>=35||maths>=35||phy>=35){
		printf("your total percentage is %f and your are pass",total);
		
	}
	else {
		printf("your total percentage is %f and you are fail",total);
		
	}
	return 0;
}
