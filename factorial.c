#include<stdio.h>
#include<conio.h>
int main()
{
	int i,fact=1,n;
	printf("\n enter the number:=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial:=%d",fact);
    getch();
}
