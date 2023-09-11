#include <stdio.h>
int main()
{
	int number,sum=0,remainder,count =0;
	printf("enter the number");
	scanf("%d",&number);
	while(number)
	{
		remainder=number%10;
		sum=sum+(remainder+1);
		number=number/10;
	}
	printf("incresing 1 to all digits:%d",sum);
	return 0;
}