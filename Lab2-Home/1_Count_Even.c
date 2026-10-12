// Write int countEven(int a[], int n) that returns how many elements are even. Read the
// array in main and print the count.
// INPUT 6 / 3 8 4 7 10 5 OUTPUT Even numbers = 3
#include <stdio.h>
int countEven(int a[], int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(a[i]%2 != 0) count++;
    }
    return count;
}
int main(){
    int arr[] = {3,8,4,7,10,5};
    int size = 6;
    int res = countEven(arr,size);
    printf("OUTPUT Even numbers = %d",res);
}