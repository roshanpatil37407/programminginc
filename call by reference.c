#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a,b ,*x,*y;
	printf("enter the value for a and b:\n");
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	printf("x=%d, y=%d\n",*x,*y);
	swap(x,y);
	return 0;
	
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("x=%d, y=%d",*x,*y);
	
}
