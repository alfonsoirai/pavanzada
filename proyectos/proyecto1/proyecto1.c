#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

long int pri[6000][2];

long int M,
         N,
         i,
         k,
         j,
         counter,
         numPrimo,
         aux;
bool qwe;

bool primoNo(long int m);

bool primoNo(long int m){
    long int conP;
    j = 0;
    do{
        j++;
    }while(!((m % pri[j][0])==0) || !(pri[j][0]>sqrt(m)) || !(j == numPrimo));

    if((m % pri[j][0]) == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    N = 7;
    M = 8;
    if(N!=0){
        pri[0][0] = 2;
        numPrimo = 1;
    }
    for(int i = 1; i< (2*((N+2)/2)+1); i++){
        k = i;
        k++;
        qwe = primoNo(k);
        if(qwe){
            numPrimo++;
            pri[numPrimo][0]=k;
        }
    }
    for(int i = 0; i<numPrimo; i++){
        aux = pri[i][1];
        do{
            pri[i][1] = pri[i][1]+(N/aux);
            pri[i][1] = pri[i][1]-(M/aux)-((N-M)/aux);
            aux = aux*pri[i][0];
        }while(!(N/aux==0));

        counter = 0;
        for(int i = 0; i<numPrimo; i++){
            if(pri[i][1]!=0){
                counter++;
                printf("%li", counter);
            }else{
                printf("%li", counter);
            }
        }

    }
    return 0;
}