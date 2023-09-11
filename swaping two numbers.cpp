#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the firsst number");
	scanf("%d",&a);
	printf("enter the number");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping first number=%d",a);
	printf("after swapping second number=%d",b);	
	return 0;
}