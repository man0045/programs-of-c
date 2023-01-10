#include<stdio.h>
int force(int m, int a);
int main(){
    int m,a;
    printf("enter the value of mass and acceleration");
    scanf("%d%d",&m,&a);
    printf(" the force of the mass exerted by body having acceleration  is a %d ", force(m,a));
    return 0;
}
int force(int m , int a)
{
    int result ;
    result=m*a;
    return result;
}
