#include <stdio.h>
void sorts(int pro[],int at[],int bt[],int size){
    for(int i= 0;i<size-1;i++){
        if(at[i]>at[i+1]){
            
            at[i] = at[i]+at[i+1];
            at[i+1] = at[i]-at[i+1];
            at[i] = at[i]-at[i+1]; 
            if(i>=2) i -= 2;  
        }
    }
    for(int j= 0;j<size;j++){
        printf("%d ",at[j]);
    }
}
void main(){
    int pro[] = {1,2,3,4};
    int at[] = {3,0,2,1};
    int bt[] = {4,5,2,4};
    int size = 4;
    sorts(pro,at,bt,size);
    
    
    
}