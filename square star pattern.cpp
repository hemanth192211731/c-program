#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter the no.of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}