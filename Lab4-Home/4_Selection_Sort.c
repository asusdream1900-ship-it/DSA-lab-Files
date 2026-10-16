// Sort n integers into descending order using selection sort (pick the maximum each round).
// INPUT 5 / 3 1 4 2 5 OUTPUT 5 4 3 2 1
#include<stdio.h>
void main(){
    int arr[] = {3,1,4,2,5};
    int size = 5;
    for(int i =0;i<size;i++){
        int max = arr[i];
        int ind = i;
        for(int j = i;j<size;j++){
            if(max<arr[j]){
                max = arr[j];
                ind = j;
            }
        }
        if(i!=ind){
            arr[i] = arr[i]+arr[ind];
            arr[ind] = arr[i]-arr[ind];
            arr[i] = arr[i]-arr[ind]; 
        }   
    }
    printf("OUTPUT ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
}