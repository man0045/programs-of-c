#include<stdio.h>
void main()
{
    int a,n,x=0;
    printf("enter the number");
    scanf("%d",&n);
    while (n>0)
    {
        a=n%10;
        n=n/10;
        x=x+a;
    }
    printf("%d",x);
}