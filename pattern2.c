#include<stdio.h>
void main()
{
    char ch ='0';
    for(int i=1;i<=5;i++)
    {
        ch=i;
        for (int j=1;j<=i;j++)
        {
            // ch = j;
            printf("%c", (ch+64));
        }
        // ch=i;
        printf("\n");
    }

}