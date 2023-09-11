#include <stdio.h>
int main()
{
	int i,n,a,b=0,c;
	scanf("%d",&n);
	c==n;
	while(n!=0)
	{
		a=n%10;
		b=(b*10)+a;
		n=n/10;
	}
	if(c==b)
	printf("%d is palindrome",n);
	else
	printf("%d is not palindrome",n);
	return 0;
}