#include<stdio.h>
int main(){
	int n,i,odd_sum=0,even_sum=0;
	printf("enter the value of number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0)
		even_sum=even_sum+i;
		else
		odd_sum=odd_sum+i;
	}
	printf("sum of all odd number=%d",odd_sum);
	printf("sum of all even number=%d",even_sum);
}