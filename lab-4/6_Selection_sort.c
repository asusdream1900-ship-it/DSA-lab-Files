// Sort n integers using selection sort and print the final sorted array.
// INPUT 5 / 29 10 14 37 13 OUTPUT 10 13 14 29 37
# include<stdio.h>

void main(){
    int arr[] = {29,10,14,37,13};
    int size = 5;
    printf("OUTPUT\n");
    for(int i = 0;i<size-1;i++){
        
        int min = arr[i],ind = i;
        for(int j = i;j<size;j++){
            if(min>arr[j]){
                min = arr[j];
                ind = j;
            }
        }
        min = min+arr[i];
        arr[i] = min-arr[i];
        arr[ind] = min -arr[i];
        
        for(int p = 0;p<size;p++){
            printf("%d ",arr[p]);
        }
        printf("\n");
        
    }
}