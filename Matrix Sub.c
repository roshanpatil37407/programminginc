#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j;
	printf("\n enter first matrix=");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter second matrix=");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n subtraction of two martix=");
	for(i=1;i<=3;i++)
	{
		printf("\n");
		for(j=1;j<=3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("\t %d",c[i][j]);
		}
	}
	getch();
}
