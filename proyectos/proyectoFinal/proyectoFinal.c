#include "stdio.h"

void poloXOR(long long T){
    long long N;
    while(T--){
        scanf("%lld", &N);
        long long array[N];
        long long previous = 0;
        for(int i = 0; i < N; i++){
            long long temp;
            scanf("%lld", &temp);
            array[i] = previous ^ temp;
            previous = array[i];
        }
        long long result = 0,
                  onesCount;
        int p;
        for(int i = 0; i < 32; i++){
            p = 1;
            p <<= i;
            onesCount = 0;
            for(int j = 0; j < N; j++){
                if(p & array[j]){
                    onesCount++;
                }
            }
            result += (onesCount) * (N + 1 - onesCount) * p;
        }
        printf("%lld\n", result);
    }
} 

int main(){
    long long T;
    printf("Enter the number of tests: \n");
    scanf("%lld", &T);
    poloXOR(T);
    return 0;
}