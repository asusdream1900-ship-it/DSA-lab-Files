// An inversion is a pair of positions i < j with a[i] > a[j] . Count the inversions while
// merging: when an element from the right half is placed before elements of the left half, add the
// number of elements still left in the left half.
// INPUT 5 / 2 4 1 3 5 OUTPUT Inversions = 3
#include<stdio.h>
void main(){
    int arr[] = {2,4,1,3,5};
    int size = 5;
    int count = 0;
    for(int i=0;i<size;i++){
        for(int j =0;j<size;j++){
            if(i<j && arr[i]>arr[j]) count++;
        }
    }
    printf("OUTPUT Inversions = %d",count);
}