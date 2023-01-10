#include<stdio.h>
int  avg( int a, int b, int c);
int main(){
    int x,a,b,c;
    printf("enter the three number a b c");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",avg(a,b,c));
    return 0;
}
int avg( int a, int b, int c)
{
    int x;
    x=(a+b+c)/3;
    
    return x;

}
