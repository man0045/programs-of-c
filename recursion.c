#include<stdio.h>
int main(int x){
    int a;
    scanf("%d",&a);
    printf("%d",factorial(a));
    return 0;
    
}

int factorial(int x){
    if(x==0||x==1)
    return 1;
    else
    return x* factorial(x-1);
}
