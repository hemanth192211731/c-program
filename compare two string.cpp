#include<stdio.h>
#include<string.h>
int main(){
	char str1[20];
	char str2[20];
	int value;
	printf("enter the string 1 :");
	scanf("%s",str1);
	printf("enter the string 2 :");
	scanf("%s",str2);
	value=strcmp(str1,str2);
	if (value==0)
	printf("string are equal");
	else
	printf("string are not equal");
}