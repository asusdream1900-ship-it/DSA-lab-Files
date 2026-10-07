// Sort n integers using insertion sort and print the final sorted array.
// INPUT 4 / 8 3 5 1 OUTPUT 1 3 5 8
# include<stdio.h>
void main(){
    int arr[] = {8,3,5,1};
    int size = 4;
    printf("OUTPUT ");
    for(int i = 0;i<size-1;i++){
        if(arr[i]>arr[i+1]) {
            arr[i] = arr[i]+arr[i+1];
            arr[i+1] = arr[i]-arr[i+1];
            arr[i] = arr[i]-arr[i+1];
            if(i>=1) i = i-2;
        } 
    }
    for(int j = 0;j<size;j++){
        printf("%d ",arr[j]);
    }
}