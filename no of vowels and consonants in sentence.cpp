#include <stdio.h>
#include <string.h>
int main()
{
	char t[15];
	printf("enter the word");
	scanf("%s",&t);
	int count1=0,count2=0,i;
	for(i=0;i<strlen(t);i++)
	{
		if((t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'))
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	printf("no of vowels are %d:\n",count1);
	printf("no of vowels are %d :\n",count2);
}