// Sort n integers with merge sort. Print the array after every merge, so the merging is visible.
// INPUT 5 / 38 27 43 3 9 OUTPUT (one line per merge) ... / 3 9 27 38 43
#include<stdio.h>
int main(){
    int arr[] = {38,27,43,3,9};
    int size = 5;
    int start = 0;
    int end = size-1; 
    int mid = start+end/2;
    printf("%d",mid);
}