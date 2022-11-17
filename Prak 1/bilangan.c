#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if (x >= 4 && x <= 100){
        if (x % 2 == 0){
            printf("Ya\n");
        }
        else {
            printf("Tidak\n");
        }
    }
    else {
        printf("Tidak\n");
    }
    return 0;
}