﻿#include <stdio.h>
void test() 
{
 // test function that does nothing
 return ;
}
int main() 
{
 int a = 5;
 // printing the address of variable a
 printf("Address of variable = %p\n", &a); 
 // printing the address of function main()
 printf("Address of a function = %p", test);
 return 0;
}
