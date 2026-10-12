// Write a swap(int *a, int *b) function that swaps two numbers read from the user.
// INPUT 5 8 OUTPUT After swap: 8 5
# include<stdio.h>
void swap(int* a, int* b){
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}
int main(){
    int data1 = 10;
    int data2 = 20;
    printf("input %d %d ",data1,data2);
    swap(&data1,&data2);
    printf("OUTPUT after swap: %d %d",data1,data2);
    
}