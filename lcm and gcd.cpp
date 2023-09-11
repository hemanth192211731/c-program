#include <stdio.h>
int main()
{
	int i,n,remainder,num,den,num1,num2,lcm,gcd;
	printf("enter the number");
	scanf("%d %d",&num1,&num2);
	num=(num1>num2)?num1:num2;
	den=(num1<num2)?num1:num2;
	remainder=num%den;
	while(remainder!=0)
	{
		num=den;
		den=remainder;
		remainder=num%den;
	}
	gcd=den;
	lcm=(num1*num2)/gcd;
	printf("gcd of %d and %d is=%d",num1,num2,gcd);
    printf("lcm of %d and %d is=%d",num1,num2,lcm);
    return 0;
}