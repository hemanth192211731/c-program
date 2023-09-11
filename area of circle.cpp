#include<stdio.h>
int main()
{
	int radius,area;
	float pie=3.14;
	printf("enter the radius of cricle");
	scanf("%d",&radius);
	printf("the radius of the cricle is %d",radius);
	area=pie*radius*radius;
	printf("the area of circle is %d",area);
}