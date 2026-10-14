// Given an array with positive and negative values, find the largest sum of any contiguous
// block. Use Kadane's idea: keep the best sum ending at the current position, and reset it when
// it becomes negative.
// INPUT 8 / −2 −3 4 −1 −2 1 5 −3 OUTPUT Max sum = 7
#include<stdio.h>
void main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int size = 8;
    int val[size][size];
    for(int i=0;i<size;i++){
        for(int j =0;j<size;j++){
            val[i][j]=0;
        }
    }
    int max = 0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            val[i][j]=0;
            for(int k =j;k<size-i;k++){
                val[i][j] += arr[k];
            }
            if(max<val[i][j]) max = val[i][j];
        }
    }
    printf("OUTPUT Max sum = %d\n",max);
    for(int i=0;i<size;i++){
        for(int j =0;j<size;j++){
            printf("%d\t",val[i][j]);
        }
        printf("\n");
    }
}