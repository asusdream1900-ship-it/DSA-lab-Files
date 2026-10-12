// Write float average(int a[], int n) that returns the average, and int aboveAvg(int
// a[], int n, float avg) that returns how many elements are greater than the average. Use
// them together in main .
// INPUT 5 / 10 20 30 40 50 OUTPUT Average = 30.0, Above = 2
# include <stdio.h>
float average(int a[], int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += a[i];
    }
    return sum/n;
}
void main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    float averag = average(arr,size);
    int number = 0;
    for(int i = 0;i<size;i++){
        if(averag<arr[i]) number++;
    }
    printf("OUTPUT Average = %.2f, Above = %d",averag,number);
}