#include<stdio.h>
#include<math.h>
int main(){
	double base,exponent,result;
	printf("enter the base :");
	scanf("%lf",&base);
	printf("enter the exponent :");
	scanf("%lf",&exponent);
	result = pow(base,exponent);
	printf("%.2lf^%.2lf=%.2lf",base,exponent,result);
	return 0;
}