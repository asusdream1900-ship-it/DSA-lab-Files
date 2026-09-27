#include <stdio.h>
void sorts(int pro[],int at[],int bt[],int ct[],int tat[],int wt[],int size){
    for(int i= 0;i<size-1;i++){
        if(at[i]>at[i+1]){
            
            at[i] = at[i]+at[i+1];
            at[i+1] = at[i]-at[i+1];
            at[i] = at[i]-at[i+1]; 

            pro[i] = pro[i]+pro[i+1];
            pro[i+1] = pro[i]-pro[i+1];
            pro[i] = pro[i]-pro[i+1]; 

            bt[i] = bt[i]+bt[i+1];
            bt[i+1] = bt[i]-bt[i+1];
            bt[i] = bt[i]-bt[i+1]; 
            if(i>1) i -= 2;
        }
    }
    // arival time row colculate
    ct[0] = at[0]+bt[0];
    for(int i= 0;i<size-1;i++){
        if(ct[i]>at[i+1]){
            ct[i+1] = ct[i]+bt[i+1];
        }
        else{
            ct[i+1] = at[i+1]+bt[i+1];
        }  
    }

    printf("pro\tAT\tBT\tCI\tTAT\tWT\n");
    for(int j= 0;j<size;j++){
        tat[j] = ct[j]-at[j];
        wt[j]= tat[j]-bt[j];
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",pro[j],at[j],bt[j],ct[j],tat[j],wt[j]);
    }
}
void main(){
    int size = 4;
    int pro[]= {1,2,3,4};
    int at[] = {3,0,2,1};
    int bt[] = {4,5,2,4};
    int ct[size];
    int tat[size];
    int wt[size];
    sorts(pro,at,bt,ct,tat,wt,size);

       
    
    
}