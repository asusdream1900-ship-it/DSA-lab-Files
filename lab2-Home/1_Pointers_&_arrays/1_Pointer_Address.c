// Declare int x = 25 and a pointer p to it. Print the value of x , the address &x , the value
// stored in p , and *p .
# include<stdio.h>
void main(){
    int x = 25;
    int* p = &x;
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("p = %d\n",p);
    printf("*p = %d\n",*p);
    
}