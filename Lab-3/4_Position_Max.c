// Read n integers. Print the largest value and the index where it occurs.
// INPUT 5 / 12 45 7 23 9 OUTPUT Max = 45 at index 1
#include<stdio.h>
void max_Find(int arr[],int size){
    int val = arr[0];
    int index = 0;
    for(int i = i; i<size; i++){
        if(val<arr[i]){
            val = arr[i];
            index = i;
        } 
    }
    printf("Max = %d at index %d",val,index);
}

void main(){
    int arr[] = {3,4,6,8,6,14,17,6,2,28};
    int size = 10;
    max_Find(arr,size);
    
}