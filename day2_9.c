#include<stdio.h>
void main()
{
    int n,i,j,k=0;
    // printf("enter the no of star");
    // scanf("%d",&n);
    {
        for(i=1;i<=5;i++)
        {
            i<=3?k++:k--;
            for(j=1;j<=5;j++)
            {
                if(j>=4-k && j<=2+k){
                    printf("*");
                }
                else
                printf(" ");
            }
            printf("\n");
        }
    }
}