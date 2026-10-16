// On a sorted array, write a recursive binary search that returns the index of the key, or -1 .
// INPUT 5 8 12 15 23 / key 15 OUTPUT Found at index 3
#include<stdio.h>
int findKey(int arr[],int size,int val){
    int start = 0;
    int end = size-1;
    int mid = 0;
    for(int i =0;i<size;i++){
        mid += (end-start)/2;
        printf("%d\n",arr[mid]);
        if(arr[mid]==val) return mid;
        else if(arr[mid]>val) end = mid;
        else start = mid;
        
    }
}
void main(){
    int arr[] = {5,8,12,15,23};
    int size = 5;
    int key = 15;
    int ind = findKey(arr,size,key);
    printf("key %d OUTPUT Found at index %d",key,ind);
}