// Write a recursive function fib(n) and use it to print the first n terms of the Fibonacci series.
// INPUT 7 OUTPUT 0 1 1 2 3 5 8
# include <stdio.h>
int fib(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fib(n-1)+fib(n-2);
 }
void main(){
    int n = 10;
    printf("OUTPUT ");
    for(int i = 0;i<=n;i++){
        int res = fib(i);
        printf("%d ",res);
    }

 }