// Write void swapStudents(struct Student *a, struct Student *b) that swaps two whole
// records through pointers. Print both students before and after the swap to show it worked.
# include<stdio.h>
struct Student{
    char name[20];
    int roll;
    float marks;
};
void swapStudents(struct Student *a, struct Student *b){
    struct Student *swip;
    *swip = *a;
    *a = *b;
    *b = *swip;

}
void main(){
    struct Student s1 = {"Asha",12,38};
    struct Student s2 = {"Ravi",7,44};
    printf("%d",s1.roll);
    swapStudents(&s1,&s2);
    printf("%d",s1.roll);

}
