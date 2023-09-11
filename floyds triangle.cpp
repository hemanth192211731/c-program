#include <stdio.h>
int main()
{
	int i,n,j,k;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}
}
