#include <stdio.h>
int main()
{
	int i,n,c=0;
	printf("enter the  number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not perfect number",n);
	}
	return 0;
}