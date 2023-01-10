#include<stdio.h>
void main()
{
    int c=0;
    char ch='0';
    for(int i=0;i<5;i++)
    {
        c++;
        for(int j=0;j<=i;j++)
        {
            printf("%c",(j+65));
        }
        printf("\n");
    }
}