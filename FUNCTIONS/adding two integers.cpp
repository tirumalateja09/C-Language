 #include<stdio.h>
int add(int x,int y){
	int c;
	c=x+y;
	//printf("%d",c);
	return c;//return x+y; 
}
int main(){
	int a,b;
	a=10;
	b=20;
	int result=add(a,b);
	printf("%d",result);
}
