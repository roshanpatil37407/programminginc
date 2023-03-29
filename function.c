#include<stdio.h>
#include<conio.h>
#define pi 3.14
void cirarea (float r);
void recarea (float l, float b);
int main()
{
	float radius,length,breath;
	printf("\n enter the radius of circle:=");
	scanf("%f",&radius);
	cirarea(radius);
	printf("\n enter the length of rectangle:=");
	scanf("%f",&length);
	printf("\n enter the breath of rectangel:=");
	scanf("%f",&breath);
	recarea (length,breath);
	getch();
}
void cirarea(float r)
{
	float cir_area;
	cir_area=pi*r*r;
	printf("\narea of circle=%.2f",cir_area);
}
void recarea(float l, float b)
{
	float rec_area;
	rec_area=l*b;
	printf("\narea of rectangle=%.2f",rec_area);
}
