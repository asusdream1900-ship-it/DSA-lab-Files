# include<stdio.h>
void main(){
    
    int arr[] = {3,6,2,66,35,10,56,11,46,99};
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i<10; i++){
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    printf("Max = %d Min = %d",max,min);
}