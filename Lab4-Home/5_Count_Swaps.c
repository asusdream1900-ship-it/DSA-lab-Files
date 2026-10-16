// Sort an array with bubble sort and print the total number of swaps it made.
// INPUT 4 / 4 3 2 1 OUTPUT Sorted: 1 2 3 4, Swaps = 6
#include<stdio.h>
void main(){
    int arr[] = {4,3,2,1};
    int size = 4;
    int count = 0;
    
    for(int i =0;i<size;i++){
        if(arr[i]>arr[i+1]){
            count++;
            arr[i] = arr[i]+arr[i+1];
            arr[i+1] = arr[i]-arr[i+1];
            arr[i] = arr[i]-arr[i+1];
            if(i>=1) i -= 2; 
        } 
    }
    printf("OUTPUT Swaps = %d",count);
}