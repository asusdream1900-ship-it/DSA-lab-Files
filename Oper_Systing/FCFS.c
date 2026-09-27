#include<stdio.h>
// void fcfs(int pro[],int ap[],int bt[],int size){
//     int at[] = ap;
//     for(int i=0;i<size;i++){
//         int swip = 0;
//         for(int j=0;j<size;j++){
//             if(at[i]>at[i+i]){
//                 at[i] = at[i]+at[i+1];
//                 at[i] = at[i]-at[i+1];
//                 at[i+1] = at[i]-at[i+1];
//                 swip = 1;
//             }
//         }
//         if(swip == 0) break;
//     }
//     for(int i=0;i<size;i++){
//         printf("%d",at[i]);
//     }
    
// }
void rec(int at[],int size){
    for(int i= 0;i<size;i++){
        if(at[i]>at[i+1]){
            at[i]=at[i]+at[i+1];
            at[i+1]=at[i]-at[i+i];
            at[i] = at[i]-at[i+1];
        }
    }
    for(int i=0;i<size;i++){
        printf("%d, ",at[i]);
    }
}
void main(){
    int pro[]={1,2,3,4};
    int at[]={3,0,2,1};
    int bt[]={4,5,2,4};
    int size = 4;

    // fcfs(pro,at,bt,size);
    rec(at,size);

}