#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int strongPasswordChecker(char* s);

int strongPasswordChecker(char* s){
    bool upperCase = false;
    bool lowerCase = false;
    bool digits = false;
    int characters = 0;
    int operations;

    int size = strlen(s);

    if(size<6){
        printf("The password doesn't meet the minimum characters.\n");
        operations = 6 - size;
    }

    if(size>20){
        printf("The password length is more than the maximum");
        operations = size - 20;
    }

    if(size>=6 && size<21){
         int temp_char = s[0];

        for(int i=0; i<size; i++){
            if(islower(s[i])){
                lowerCase = true;
            }
            if(isupper(s[i])){
                upperCase = true;
            }
            if(isdigit(s[i])){
                digits = true;
            }
            if(s[i] != temp_char && characters !=0){
                temp_char = s[i];
            }
            if(s[i]==temp_char && i!=0){
                characters++;
                if(characters == 3){
                    operations++;
                    characters = 0;
                }
            }
        }

        if(operations==0){
            if(lowerCase && upperCase && digits){
                printf("The password is strong\n");
            }
            else if(lowerCase == false){
                printf("The password is not strong enough\n");
                operations++;
            }
            else if(upperCase == false){
                printf("The password is not strong enough\n");
                operations++;
            }
            else if(digits == false){
                printf("The password is not strong enough\n");
                operations++;
            }
        }
    }

    return operations;
}

int main(){
    printf("%d Operations for strong password: \n", strongPasswordChecker("hola"));
    printf("%d Operations for strong password: \n", strongPasswordChecker("Ca34112."));
    printf("%d Operations for strong password: \n", strongPasswordChecker("Patriciaaa"));
}