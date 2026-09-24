// In a sorted array, find the first and last occurrence of the key with binary search, then report
// how many times it appears — without scanning the whole array.
// INPUT 8 / 1 2 2 2 3 4 5 6 / key 2 OUTPUT 2 appears 3 times
#include<stdio.h>
void binary_Sort(int arr[],int size,int key){
    int lower = 0;
    int heigh = size-1;
    int flage = 0;
    int breaks = 0;
    for(int i = 0; lower <= heigh && i<size; i++){
        int mid = (lower+heigh)/2;
        if(key==arr[mid]&&key!=arr[mid-1]){
            flage = 1;
            int count = 1;
            for(int i = mid+1;i<size;i++){
                if(arr[mid]==arr[i]){
                    count +=1;
                }
                else{
                    break;
                }

            }
            printf("key %d OUTPUT %d appears %d times",key,mid,count);
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
    int arr[] = {3,4,5,6,6,6,17,19,24,28}; //This is sorted array
    int size = 10;
    int key = 6;
    binary_Sort(arr,size,key);
}