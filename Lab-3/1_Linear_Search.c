// Read n integers and a key. Print the index of the key, or "Not found".
// INPUT 5 / 12 5 8 23 15 / key 23 OUTPUT Found at index 3

#include<stdio.h>
void finder(int arr[],int key){
    int flag = 0;
    for(int i=0; i<10;i++){
        if(key == arr[i]){
            printf("Found at index %d\n",i);
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("Not found");
}

void main(){
    int arr[] = {3,6,2,66,35,10,56,11,46,99};
    int key = 11;
    finder(arr,key);
}



