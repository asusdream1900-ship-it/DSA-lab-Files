// Write a recursive function that returns the sum of the digits of a number.
// INPUT 1234 OUTPUT Sum of digits = 10
#include<stdio.h>
int sumOfN(int n){
    if(n==1) return 1;
    return n+sumOfN(n-1);
}
int sumOfDigit(int arr[],int size){
    if(size == 0) return 0;
    return arr[size-1]+sumOfDigit(arr, size-1);
}
int main(){
    int arr[] = {1,2,3,4};
    int size = 4;
    int val = 4;
    int res = sumOfN(val);
    printf("Sum of N = %d\n",res);
    int res2 = sumOfDigit(arr,size);
    printf("Sum of Digit = %d",res2);
}