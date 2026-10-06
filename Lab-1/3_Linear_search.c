// Read an array and a key. Print whether the key is present and its position; otherwise print "Not
// found".
// INPUT 4 8 15 16 23 / key = 15 OUTPUT Found at index 2
# include<stdio.h>
void main(){
    int arr[] = {3,6,2,66,35,10,56,11,46,99};
    int key = 11;
    for(int i = 0; i<10; i++){
        if(key == arr[i]){
            printf("index = %d",i);
            break;
        }

    }
}