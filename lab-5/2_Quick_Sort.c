// Sort n integers using quick sort with the last element as the pivot. After each partition, print the
// array and the pivot's final position.
// INPUT 5 / 9 4 7 3 8 OUTPUT 3 4 7 8 9
#include<stdio.h>

void main(){
    int arr[] = {3,2,5,0,1,8,7,6,9,4};
    int size = 10;
    int j = -1;
    for(int i = 0;i<size;i++){
        if(arr[i]<=arr[size-1]){
            j++;
            if(i>j){
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
        }
        
    }
    for(int i = 0;i<size;i++){
        printf("%d,",arr[i]);
    }

}