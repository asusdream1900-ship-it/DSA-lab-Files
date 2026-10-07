// Write a recursive function power(x, n) that returns x raised to the power n .
// INPUT 2 5 OUTPUT 2^5 = 32
# include<stdio.h>
int power(int x,int n){
    if(n==0) return 1;
    return x*power(x,n-1);
}
void main(){
    int base = 2;
    int powers = 10;
    int res = power(base,powers);
    printf("Output = %d",res);
}