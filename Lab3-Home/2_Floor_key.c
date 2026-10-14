// In a sorted array, find the floor of the key — the largest element that is ≤ key. Print it, or "none"
// if every element is larger.
// INPUT 6 / 2 4 6 8 10 12 / key 7 OUTPUT Floor = 6
# include<stdio.h>
void main(){
    int arr[]  = {2,4,6,8,10,12};
    int size = 6;
    int key = 7;
    int res = arr[0];
    for(int i =0;i<size;i++){
        if(arr[i]<=key) res = arr[i];
    }
    printf("OUTPUT Floor = %d",res);
}