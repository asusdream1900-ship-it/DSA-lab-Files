// Find the largest element by walking the array with a pointer.
// INPUT 5 / 12 45 7 23 9 OUTPUT Largest = 45
# include<stdio.h>
int largest(int* a,int* size){
    int large = *a;
    for(int i=1;i<*size;i++){
        if(large<*(a+i)) large = *(a+i);
    }
    return large;
}
void main(){
    int arr[] = {12,45,7,23,9};
    int size = 5;
    int res = largest(&arr[0],&size);
    printf("OUTPUT Largest = %d",res);
    
    
}