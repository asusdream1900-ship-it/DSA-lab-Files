// Using pointer parameters, write void minMax(int a[], int n, int *mn, int *mx) that
// finds both the smallest and largest elements in one call. Print them in main .
// INPUT 5 / 12 45 7 23 9 OUTPUT Min = 7, Max = 45
# include <stdio.h>
void minMax(int a[], int n, int *mn, int *mx){
    for(int i =0;i<n;i++){
        if(a[i]<*mx) *mx = a[i];
        if(a[i]>*mn) *mn = a[i];
    }
}
void main(){
    int arr[] = {12,45,7,23,9};
    int size = 5;
    int min = 0;
    int max = 0;
    minMax(arr,size,&min,&max);
    printf("OUTPUT Min = %d, Max = %d",min,max);
}