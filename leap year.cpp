#include<stdio.h>
int main(){
	int year,day,month;
	printf("enter the day :");
	scanf("%d",&day);
	printf("enter the month :");
	scanf("%d",&month);
	printf("enter the year :");
	scanf("%d",&year);
	if(year%4==0)
		printf("it is aleap year");
		else
		printf("it is not a leap year");
}