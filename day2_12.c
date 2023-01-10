#include<stdio.h>
void main()
{
    int n,i,j,start,end;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i=2*n-1;i++){
        for(j=1;j<=i;j++){
            if(i==start || j==start ||i==end || j==end){
                printf(n);
            }
            n--;
            start++;
            end--;
        }

    }

}