#include<stdio.h>
void main()
{
    int i,j;
    char ch='A';
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}
