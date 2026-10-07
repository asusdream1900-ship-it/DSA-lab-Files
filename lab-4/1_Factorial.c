// Write a recursive function fact(n) that returns n! . Read n and print the result.
// INPUT 5 OUTPUT 5! = 120
# include<stdio.h>
int fact(int n){
    if(n==0||n==1) return 1;
    return n*fact(n-1);
}
void main(){
    int size = 10;
    int res = fact(size);
    printf("Output %d! = %d",size,res);
}