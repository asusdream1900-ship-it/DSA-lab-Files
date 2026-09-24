#include<stdio.h>
int Swap(int *p, int *q){
    int first = *p;
    *p = *q;
    *q = first;
    
}
void main(){
    int first = 10, second = 20;
    printf("before swap = First %d Second %d\n",first,second);
    Swap(&first,&second);
    printf("after swap = First %d Second %d",first,second);
}