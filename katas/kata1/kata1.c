#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[6] = {4,6,9,2,5,7};
    int B[6] = {9,4,6,2,7,5};
    int *P;
    P = (int*)malloc(24);

    int i;
    int j;

    for(i=0; i<sizeof(A); i++){
        for(j=0; j<sizeof(B);j++){
            if(A[i]==B[j]){
                P[i]=j;
                break;
            }
        }
    }

    for(i=0; i<6; i++){
        printf("%d ", P[i]);
    }
    return 0;
}

