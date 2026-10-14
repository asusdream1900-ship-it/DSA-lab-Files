// Read n integers and print the second largest value (assume at least two distinct values).
// INPUT 5 / 12 45 7 45 9 OUTPUT Second largest = 12
# include<stdio.h>
void main(){
    int arr[] = {12,45,7,45,9};
    int size = 5;
    int first = arr[0];
    int second = arr[1];
    for(int i = 2;i<size;i++){
        if(first>second){
            int hold = first;
            first = second;
            second = hold;
        }
        if(arr[i]>second) second = arr[i];

    }
    printf("OUTPUT Second largest = %d",first);
    
   
}