﻿#include <stdio.h>
#include <string.h>
// create struct with person1 variable
struct Person {
 char name[50];
 int citNo;
 float salary;
} person1;
int main()
{
	// assign value to name of person1
 strcpy(person1.name, "roshan patil");
 // assign values to other person1 variables
 person1.citNo = 425508;
 person1. salary = 500000;
 // print struct variables
 printf("Name: %s\n", person1.name);
 printf("Citizenship No.: %d\n", person1.citNo);
 printf("Salary: %.2f", person1.salary);
 return 0;
}
