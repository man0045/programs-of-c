#include<stdio.h>
void main(){
    int a,c=0, n;
    printf("enter a number ");
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        n=n/10;
        c++;

    }
    printf("number of digits are %d",c);
}