#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100
#define LEFT 'L'
#define RIGHT 'R'
#define UP 'U'
#define DOWN 'D'

int judge(char *sequence);


int judge(char *sequence){
    int left = 0,
        right = 0,
        up = 0,
        down = 0;
    char temp;

    for(int i=0; i< strlen(sequence); i++){
        temp = tolower(sequence[i]);
        switch(temp){
            case LEFT:
                left++;
                break;
            case RIGHT:
                right++;
                break;
            case UP:
                up++;
                break;
            case DOWN:
                down++;
                break;
            default:
                return -1;
        }
    }
    return (left == right && up == down);
}

int main(){
    char sequence[MAX_LENGTH];
    int result;
    printf("Write the sequence: ");
    scanf("%s", sequence);
    result = judge(sequence);

    if(result==0){
        printf("False");
    }
    else if(result==1){
        printf("TRUE");
    }
    else if(result==-1){
        printf("Error en la secuencia");
        return 1;
    }

    return 0;

}