#include<stdio.h>
void main()
{
    int b=1 ,a=3,c=2;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=a;j++)
        printf("\n");
        a--;

        for(int j=1;j<=b;j++)
        printf("%d",j);

        if(i>=2)
        {
            for(int j=c; j>=i;j--)
            printf("%d",j);
            c=c+2;
        }
    }
}