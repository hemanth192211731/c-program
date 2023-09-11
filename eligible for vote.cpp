#include<stdio.h>
int main()
{
	int age;
	printf("enter the age :");
	scanf("%d",&age);
	if(age>=18)
	printf("you can vote");
	else
	printf("you can vote after %d",(18-age));
}