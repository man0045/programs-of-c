#include<stdio.h>
void main()
{
    int n,i,sum=0; 
    printf("enter the number");
    scanf("%d",&n);

    for (i=1; i<=n; i++){
        sum=sum+i*(i+1)*(i+2);
    }
    printf("%d",sum);
}