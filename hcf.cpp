#include <stdio.h>
int main()
{
	int num1,num2;
	printf("enter the nuumber:");
	scanf("%d %d",&num1,&num2);
	while(num1!=num2)
	{
		if(num1>num2)
		num1=num1-num2;
		else
		num2=num2-num1;
	}
	printf("the hcf is:%d",num1);
	return 0;
}