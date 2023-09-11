#include <stdio.h>
int main()
{
	int n1,n2,num,den,remain,gcd=1;
	scanf("%d %d",&n1,&n2);

	while(num!=0)
	{
		num=den;
		den=num;
		remain=num%den;
	}
	gcd =den;



	printf("gcd of %d and %d =%d\n",n1,n2,gcd);
}

