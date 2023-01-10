#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        j=i;
        for(k=1;k<=i;k++)
        {
            j++;
             printf("%d", j);
        }
        printf("\n");
    }
}