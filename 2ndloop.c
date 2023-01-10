#include<stdio.h>
void main(){
    int i,j,b=1 ;
    for(i=0;i<=4;i++){
        for(j=0;j<=i;j++)
        {
           i=b+1;
            printf("%d\n",i);

        }
        printf("%d\n");
    }
}