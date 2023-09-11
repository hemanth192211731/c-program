#include <stdio.h>
int main()
{
	int i,n,n1,n2,count=0,sum=0;
	printf("enter the number of n1 and n2:");
	scanf("%d %d",&n1,&n2);
	printf("integers of divisible by 5 are:\n");
	for(i=n1;i<=n2;i++)
	{
		if(i%5==0)
		{
			printf("%d ",i);
			count++;
			sum=sum+i;
		}
	}
		printf("\nnumber of integers thast are divisible by 5 between %d and %d = %d \n",n1,n2,count);
		printf("sum of all integers that are divisble by 5 = %d\n",sum);
	
	return 0;
}