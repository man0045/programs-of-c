#include<stdio.h>
int reverse( int *arr , int n){
    int temp;
    for(int i=0 ;i<n/2;i++){
        temp =arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main(){
    int arr[]={2,3,4,5,8,6,9};
    int i;
    reverse(arr,7);
    for(i=0;i<7;i++){
         printf("the value of %d elements is : %d\n " , i ,arr[i]);
    
    }
    return 0;
}