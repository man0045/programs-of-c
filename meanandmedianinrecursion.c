#include<stdio.h>
int mean(int a,int b,int c,int d,int e);
int median(int a,int b,int c,int d,int e);
int main(){
    int a,b,c,d,e;
    printf("enter the five marks a, b ,c,d,e : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf(" the mean is %d\n",mean(a,b,c,d,e));
    printf("the median is %d\n",median(a,b,c,d,e));

}
int mean(int a,int b,int c,int d,int e){
    int r;
    r=(a+b+c+d+e)/5;
    return r;

}
int median(int a,int b,int c,int d,int e){
    

}