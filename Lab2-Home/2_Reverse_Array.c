// Write void reverse(int a[], int n) that reverses the array in place. Print the array in
// main afterwards to show the change stuck.
// INPUT 5 / 1 2 3 4 5 OUTPUT 5 4 3 2 1
#include <stdio.h>
int reverse(int a[], int n){
    int count = 0;
    printf("OUTPUT ");
    for(int i = n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return count;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    reverse(arr,size);
}
    