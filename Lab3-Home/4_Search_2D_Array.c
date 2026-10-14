// Read an m × n matrix and a key. Print the (row, col) where it is found, or "Not found".
// INPUT 2 3 / 1 2 3 / 4 5 6 / key 5 OUTPUT Found at (1, 1)
# include<stdio.h>
void main(){
    int n= 2;
    int m= 3;
    int key = 5;
    int arr[2][3] = {{1,2,3},{4,5,6}};

    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==5){
                printf("OUTPUT Found at (%d, %d)",i,j);
                flag =1;
            }
        }
    }
    if(flag == 1) printf("Not found");
    
}