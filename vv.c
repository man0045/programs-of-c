#include<stdio.h>
void main()
{
    int a,c,n;
    printf("enter a number ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        c++;
        n=n/10;

    }
    printf("number of digits are %d",c);
}