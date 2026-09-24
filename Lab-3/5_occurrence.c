// In a sorted array that may contain duplicates, use binary search to print the index of the first
// occurrence of the key.
// INPUT 8 / 1 2 2 2 3 4 5 6 / key 2 OUTPUT First occurrence at index 1
#include<stdio.h>
void binary_Sort(int arr[],int size,int key){
    int lower = 0;
    int heigh = size-1;
    int flage = 0;
    for(int i = 0; lower <= heigh && i<size; i++){
        int mid = (lower+heigh)/2;
        if(key==arr[mid]&&key!=arr[mid-1]){
            printf("First occurrence at index %d",mid);
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
    int arr[] = {3,4,6,6,6,6,17,19,24,28}; //This is sorted array
    int size = 10;
    int key = 6;
    binary_Sort(arr,size,key);
}