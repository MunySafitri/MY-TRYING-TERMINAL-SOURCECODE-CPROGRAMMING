//tugas 3
#include<stdio.h>
int main(){
    int i,prima=0,n,bil=0;
    printf("masukkan nilai n: ");
    scanf("%d",&n);
    for(i=0;i<1000;i++){
        if(i==1){
            prima=0;
        }
        else if(i==2||i==3||i==5||i==7||i==11){
            prima=1;
            bil++;
        }
        else if(i%2==0){
            prima=0;
        }
        else if(i%3==0){
            prima=0;
        }
        else if(i%5==0){
            prima=0;
        }
        else if(i%7==0){
            prima=0;    
        }else{
            prima=1;
            bil++; 
        }
        if(prima==1){
            printf("%d ", i);
            
        }
        if(bil==n+1) break;
    }
    return 0;
}