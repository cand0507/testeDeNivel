#include <stdio.h>
#include <stdlib.h>

void inverte(int vetor[], int n){
    int aux[n];
    int i;
    for(i=0;i<n;i++){
        aux[i]=vetor[i];
    }
     for(i=0;i<n;i++){
     vetor[i] = aux[n-1-i];
 }
}


 
 int main(){
     int c;
     int vetor[5]={1,2,3,4,5};
    inverte(vetor,5);
    
    for(c = 0;c<5;c++){
        printf("%d\t",vetor[c]);
    }
    return(0);
 }