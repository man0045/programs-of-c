#include<stdio.h>
void main()
{
    int i,j,c=0;
    for(i=1;i<=10;i++)
    {
        c=0;
        for(j=2;j<=10;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {

          printf("%d\n",i);
        }
    
    }
}