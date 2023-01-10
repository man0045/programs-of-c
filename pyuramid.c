#include<stdio.h>
void main()
{
    int a,b,n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==6 || j-i==3)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("/n");


    }
}