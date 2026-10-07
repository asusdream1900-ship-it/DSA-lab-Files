// Write a recursive function sum(n) that returns 1 + 2 + ... + n .
// INPUT 5 OUTPUT Sum = 15
# include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}
void main(){
    int size = 10;
    int res = sum(size);
    printf("Output = %d",res);
}