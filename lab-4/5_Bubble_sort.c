// Sort n integers using bubble sort. Print the array after every pass so the sorting is visible.
// INPUT 5 / 5 1 4 2 8 OUTPUT 1 4 2 5 8 / 1 2 4 5 8 / ... / 1 2 4 5 8
# include<stdio.h>

void main(){
    int arr[] = {5,1,4,2,8};
    int size = 5;
    printf("OUTPUT\n");
    for(int i = size-1;i>=0;i--){
        
        int max = arr[i],ind = i;
        for(int j = 0;j<i;j++){
            if(max<arr[j]){
                max = arr[j];
                ind = j;
            }
        }
        int hold = arr[ind];
        for(int t = ind;t<i;t++){
            arr[t]=arr[t+1];
        }
        arr[i]=hold;
        
        for(int p = 0;p<size;p++){
            printf("%d ",arr[p]);
        }
        printf("\n");
        
    }
}