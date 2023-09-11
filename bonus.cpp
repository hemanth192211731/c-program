        #include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    int x,y,z;
    printf("enter grade");
    scanf("%c",&c);
    printf("enter salary");
    scanf("%d",&x);
    if(c=='A')
        y=(x*0.05);
    else if(c=='B')
        y=(x*0.1);
    if(x<10000)
        z=x*0.02;
    printf("salary %d\n",x);
}
          