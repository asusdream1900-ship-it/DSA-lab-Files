// Read n integers into an array and print them using pointer arithmetic *(p + i) , not a[i]
# include<stdio.h>
void main(){
    int arr[] = {4,7,8,3,9,3,7,9};
    int size = 8;
    int* p = &arr[0];
    for(int i=0;i<size;i++){
        printf("%d\n",*(p+i));
    }
    
}