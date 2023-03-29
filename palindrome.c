#include<stdio.h>
#include<conio.h>
int main()
{
	int n,co=0,or,rem;
    printf("\n Enter the number:=");
	scanf("%d",&n);
	or=n;
	while(n!=0)
	{
		rem=n%10;
		co=co*10+rem;
		n=n/10;
	}
	printf("\n Reverse number=%d",co);
	if(or==co)
	{
		printf("\n Number %d is palindrome",or);
	}
	else
	{
		printf("\n Number %d is not palindrome",or);
	}
	getch();
}
	

