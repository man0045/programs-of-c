#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,fact=1,n,x=0;
    printf("enter the number ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        fact = fact*i;
        sum=sum+(fact/x) ;
    }
     printf("%d",sum);
}