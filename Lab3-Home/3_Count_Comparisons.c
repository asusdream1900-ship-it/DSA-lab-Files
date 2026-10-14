// For the same sorted array and key, count how many comparisons linear search makes and
// how many binary search makes. Print both, side by side.
// INPUT 7 / 1 2 3 4 5 6 7 / key 7 OUTPUT Linear = 7, Binary = 3
# include<stdio.h>
void main(){
    int arr[]  = {1,2,3,4,5,6,7};
    int size = 7;
    int key = 7;
    int linear = 0;
    for(int i =0;i<size;i++){
        if(arr[i]==key) linear = i+1;
    }
    int lower = 0;
    int heigh = size-1;
    int binary = 0;
    for(int i = 0; lower <= heigh && i<size; i++){
        binary++;
        int mid = (lower+heigh)/2;
        if(key==arr[mid]){
            break;
        } 
        else if(key>arr[mid]) lower = mid+1; 
        else heigh = mid-i;    
    }

    printf("OUTPUT Linear = %d, Binary = %d",linear,binary);
}