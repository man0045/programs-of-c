#include<stdio.h>
void main()
{
    int n,i,j,k=0;
     printf("enter the no of star");
     scanf("%d",&n);
    {
        for(i=5;i<=1;i++)
        {
            i<=3?k++:k--;
            for(j=n;j<=1;j--)
            {
                if(j>=n-k && j<=n-2+k){
                    printf("*");
                }
                else
                printf(" ");
            }
            printf("\n");
        }
    }
}