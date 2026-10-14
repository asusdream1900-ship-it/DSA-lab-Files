// Write int countKey(int a[], int n, int key) that returns how many times the key
// appears. Call it from main and print the count.
// INPUT 6 / 3 5 3 8 3 1 / key 3 OUTPUT 3 appears 3 times
# include<stdio.h>
int countKey(int a[],int n,int key){
    int count = 0;
    for(int i =0;i<n;i++){
        if(a[i]==key) count++;
    }
    return count;
}
void main(){
    int arr[]  = {3,5,3,8,3,1};
    int size = 6;
    int key = 3;
    int res = countKey(arr,size,key);
    printf("OUTPUT %d appears %d times",key,res);
}