#include<stdio.h>
void main()
{
    int a,i,c=0;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    if(a%i==0)
    // printf("%d\t",i);
    c++;
    }
    
if(c%2!=0)
    printf("perfect square");
 else
    printf("not a perfect square");
}