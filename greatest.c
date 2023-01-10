#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
      if(b>c){
        printf("%d is greatest ",a);
      }
      else
      printf("%d is greatest ",c);
    }
    else{
        if(a>c){
            printf("%d is greatest ",a);
        }
        else
        printf("%d is greatest",c);
    }
}