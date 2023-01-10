#include<stdio.h>
int farenheight( int C);
int main(){
    int C;
    printf("enter the the farenheight value");
    scanf("%d",&C);
    printf("%d",farenheight(C));
    return 0;
}
 int farenheight(int C){
    int result;
     result = 1.8*C-32;
     return result;

}