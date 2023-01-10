#include<stdio.h>
int sum(int a,int b);
int main(){
    int c,a,b;
    c=sum(a,b);
    printf("the value of c is %d",c);
    return 0;
}
int sum(int a, int b)
{
    int d;
    scanf("%d%d",&a,&b);
    printf("enter the two number a,b");
    d= a+b;
    return d;
    

}