#include <stdio.h>
#include <signal.h>

int noFinish = 1;

void porcessSignal(int signal){
    printf("Got signal %d\n", signal);
    noFinish = 0;
}

int main(){
    signal(SIGUSR1 ,porcessSignal);
    while(noFinish){
        
    }

    return 0;
}