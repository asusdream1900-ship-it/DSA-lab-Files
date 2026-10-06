# include<stdio.h>
void main(){
    struct student{
        char name[20];
        int roll;
        int marks;
    };

    struct student s1 = { "Ankit",004,81};
    struct student s2 = { "Ravi",005,85};
    struct student s3 = { "sonu",006,69};

    struct student arr[3] = {s1,s2,s3};
    
    int first = 0;

    for (int i = 1; i < 3; i++){
        if(arr[first].marks<arr[i].marks) first = i;
    }
    printf("Topper = name %s: roll %d: marks = %d:",arr[first].name,arr[first].roll,arr[first].marks);
    
}