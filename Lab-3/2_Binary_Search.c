// Read a sorted array of n integers and a key. Print the index, or "Not found".
// INPUT 7 / 5 8 12 15 23 34 41 / key 34 OUTPUT Found at index 5
#include<stdio.h>

void binary_Sort(int arr[],int size,int key){
    int lower = 0;
    int heigh = size-1;
    int flage = 0;
    for(int i = 0; lower <= heigh && i<size; i++){
        int mid = (lower+heigh)/2;
        if(key==arr[mid]){
            printf("Found, index = %d ",mid);
            flage = 1;
            break;
        } 
        else if(key>arr[mid]){
            lower = mid+1;
        }
        else{
            heigh = mid-i;
        }
    }
    if(flage == 0){
        printf("Not found");
    }
}

void main(){
    int arr[] = {3,4,6,8,10,14,17,19,24,28}; //This is sorted array
    int size = 10;
    int key = 24;
    binary_Sort(arr,size,key);
}