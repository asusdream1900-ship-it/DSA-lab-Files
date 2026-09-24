#include<stdio.h>
int search(int a[], int n, int key){
    int indx = -1;
    for(int i =0;i<n;i++){
        if(key == a[i]) indx = i;
    }
    return indx;
}

void main(){
    int arr[] = {3,6,2,66,35,10,56,11,46,99};
    int size = 10;
    int key = 66;
    int data = search(arr,size,key);
    printf("index = %d",data);
    
}