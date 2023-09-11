#include <stdio.h>
int main()
{
	int num,sum=0,rem,temp;
	printf("enter the number:");
	scanf("%d",&num);
temp=num;
while(num>0)
{
	rem=num%10;
	sum=sum+(rem*rem*rem);
	num=num/10;	
	}	
	if(temp==sum)
	{
		printf("%d is a armstrong number",temp);
	}
	else
	{
		printf("%d is not an armstrong number",temp);
	}
	return 0;
}