// Read n integers and a key. Print how many times the key appears.
// INPUT 6 / 4 7 4 9 4 2 / key 4 OUTPUT Count = 3
#include<stdio.h>
int counts(int arr[],int size,int key){
    int count = 0;
    for(int i = 0; i<size; i++){
        if(key==arr[i]){
            count +=1;
        }
    }
    return count;
}

void main(){
    int arr[] = {3,4,6,8,6,14,17,6,2,28};
    int size = 10;
    int key = 6;
    int res = counts(arr,size,key);
    printf("Count = %d",res);
}