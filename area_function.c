#include<stdio.h>
#include<math.h>
int area(int a);
int main(){
    int a,c;
    c=area(a);
    printf("the area of square ",c);
    return 0 ;
}
int area(int a){
    int c;
    c=a*a;
    return c;
}