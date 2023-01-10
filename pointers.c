#include<stdio.h>
int main(){
    int i=34;
    int *j=&i;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    return 0;
}