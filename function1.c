#include<stdio.h>
void main()
{
    int a,b;
    printf(" enter the three number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d%d",a,b);
}