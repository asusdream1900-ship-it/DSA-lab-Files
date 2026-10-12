// 3. In one sentence, explain why a[i] and *(a + i) give the same element.
# include<stdio.h>
void main(){
    int arr[] = {4,7,8,3,9,3,7,9};
    int size = 8;
    int* p = &arr[0];
    for(int i=0;i<size;i++){
        printf("a[%d] = %d ,*(p+i) %d\n",i,arr[i],*(p+i));
    }
    printf("i is not a value it is a size (4 bit)");
    
}