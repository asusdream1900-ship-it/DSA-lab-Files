// Using only the pointer (not x directly), change x to 100 and print x to confirm.
# include<stdio.h>
void main(){
    int x = 8;
    int* p = &x;
    *p = 100;
    printf("%d",x);
    
}