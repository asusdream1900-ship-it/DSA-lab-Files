#include <stdio.h>

void main(){
    int arr[] = {10,2,3,4,7,6,8,9,5,0};
    int size = 10;
    for(int i= 0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            
            arr[i] = arr[i]+arr[i+1];
            arr[i+1] = arr[i]-arr[i+1];
            arr[i] = arr[i]-arr[i+1]; 
            if(i>0) i -= 2;  
        }
    }
    for(int j= 0;j<size;j++){
        printf("%d ",arr[j]);
    }
    
}