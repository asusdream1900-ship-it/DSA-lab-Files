#include<stdio.h>
void doubleAll(int a[], int n){
    printf("OUTPUT = ");
    for(int i =0;i<n;i++){
        printf("%d, ",2*a[i]);
    }
    
}

void main(){
    int arr[] = {3,6,2,66,35,10,56,11,46,99};
    int size = 10;
    doubleAll(arr,size);
    
}