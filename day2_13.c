#include <stdio.h>
void main()
{
    int n;
    printf("enter the star do you want to display");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d",2*i-1);
        }
        {
            if (i==1 )

            printf("*");

            else
            {
                printf(" ");
            } 
        }
        printf("\n");
    }
}