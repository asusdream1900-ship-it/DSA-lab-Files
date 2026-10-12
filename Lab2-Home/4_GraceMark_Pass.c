// Define struct Student { name, roll, marks } . Write two functions:
// 1. void addGrace(struct Student a[], int n, float g) — adds g grace marks to
// every student.
// 2. int countPass(struct Student a[], int n, float cut) — returns how many have
// marks ≥ cut .
// Read n students, add 5 grace marks, then print how many pass at cutoff 40.
// INPUT 3 / Asha 12 38 / Ravi 7 44 / Meena 19 33 OUTPUT After grace: 43 49
// 38 | Passed = 2
# include<stdio.h>
struct Student{
    char name[20];
    int roll;
    float marks;
};
int countPass(struct Student a[], int n, float cut){
    int count = 0;
    for(int i =0;i<n;i++){
        if(a[i].marks>=cut) count++;
    }
    return count;

}
void addGrace(struct Student a[], int n, float g){
    printf("OUTPUT After grace: ");
    for(int i =0;i<n;i++){
        a[i].marks += g;
        printf("%.f ",a[i].marks);
    }
}

void main(){
    struct Student s1 = {"Asha",12,38};
    struct Student s2 = {"Ravi",7,44};
    struct Student s3 = {"Meena",19,33};
    struct Student arr[] = {s1,s2,s3};
    int size = 3;
    float grid = 5; 
    int cutoff = 40;  
    addGrace(arr,size,grid);
    int res = countPass(arr,size,cutoff);
    printf("Passed = %d",res);
}