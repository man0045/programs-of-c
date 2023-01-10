#include<stdio.h>
void main()
{
    int n,i,j,k=0,rows;
     printf("enter the no of star");
     scanf("%d",&rows);
     n=(rows+1)/2;
    {
        for(i=1;i<=rows;i++)
        {
            // i<=n?k++:k--;
            if(rows%2==0){
                if(i<=n)k++;
                if(i)
            }
            for(j=1;j<=n;j++)
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