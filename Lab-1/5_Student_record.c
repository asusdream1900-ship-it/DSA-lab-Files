# include<stdio.h>
void main(){
    struct student{
        char name[20];
        int roll;
        int marks;
    };

    struct student s1 = { "Ankit",004,80};
    printf("name = %s: ",s1.name);
    printf("roll = %d: ",s1.roll);
    printf("marks = %d: ",s1.marks);
}