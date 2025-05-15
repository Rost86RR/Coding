#include <stdio.h>

// 👇 прототип функции
void caugh(int n);

int main(void){
    caugh(5);
    return 0;
}

void caugh(int n){
    for(int i = 0; i < n; i++){
        printf("caugh..\n");
    }
}
