#include<stdio.h>
void main(){
    
    int arr[11] = {3,6,2,66,35,10,56,11,46,99};
    int key = 110;
    int index = 5;
    int size = 10;


    for(int i = size; i>index-1; i--){
        if(index == i){
            arr[i]= key;
            break;
        }
        else{
            arr[i] = arr[i-1];

        }
        
    }
    for(int i=0; i<11; i++){
        printf("%d ",arr[i]);
    }
    
}