#include <stdio.h>
int main()
{
	int i,n,reverse=0,remainder;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		n=n/10;
		reverse=reverse*10+remainder;
	}
	printf("%d",reverse);
	return 0;
}