#include<stdio.h>
int main()
{
    int sum=0,fact=1,n;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
        sum = sum + fact; 
    }
     printf("%d",sum);
}