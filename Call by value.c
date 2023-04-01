#include<stdio.h>
int fun(int,int);
int main()
{
	int x=5,y=7;
	fun(5,7);
	printf("x=%d y=%d",x,y);
	
}
int fun(int a,int b)
{
	a=7;
	b=5;
	printf("x=%d y=%d",a,b);
	
}
