#include<stdio.h>
void increment();
void decrement();
int i;
int main()
{
	
	extern i;
	i=2;
	printf("i = %d",i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}
void increment()
{
	i=i+1;
	printf("\non incrementing i=%d",i);
}
void decrement()
{
		i=i-1;
	printf("\non decrementing i=%d",i);
}



