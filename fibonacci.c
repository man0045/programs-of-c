#include<stdio.h>
void main()
{
    int a,i,c=0,d,b=1;
    printf("enter the value of a");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        d=b+c;
        printf("%d",i);
        c++;
    }

}