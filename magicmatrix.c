#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

int main()
{
    int order, i, j, k, p, q, mid, magic[SIZE][SIZE];

    printf("Enter order of magic square (order must be odd): ");
    scanf("%d", &order);

    if(order%2==0)
    {
        printf("Order must be odd.\n");
        printf("Exiting...");
        exit(0);
    }

    mid = order/2;

    for(i=0;i< order; i++)
    {
        for(j=0; j< order; j++)
        {
            magic[i][j]=0;
        }
    }

    k=mid;
    j=0;
    for(i=1; i<= order*order; i++)
    {
        magic[j][k] = i;
        p = j--;
        q = k++;

        if(j< 0)
        {
            j = order-1;
        }

        if(k>order-1)
        {
            k=0;
        }

        if(magic[j][k] != 0)
        {
            k = q;
            j = p+1;
        }
    }

    printf("Generated MAGIC SQUARE is:\n");
    for(i=1;i<=6*order;i++)
    {
        printf("-");
    }
    printf("\n");
    for(j=0;j< order;j++)
    {
        printf("|");
        for(k=0; k< order; k++)
        {
            printf("%4d |", magic[j][k]);
        }
        printf("\n");
        for(i=1; i<=6*order; i++)
        {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}