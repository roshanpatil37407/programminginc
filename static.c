#include<stdio.h>
int increment();
int main()
{
	increment();
	increment();
	increment();
	return 0;
}
int increment()
{
	static int i=1;
	printf("%d",i);
	i=i+1;
}
