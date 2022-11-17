#include <stdio.h>

int faktorial (int x){
    int i;
    int f=1;
    for(i=1;i<=x;i++){
        f *= i;
    }
    return f;
}

int main(){
    int x;
    scanf("%d",&x);
    int temp;
    int total;
    int mod;
    total = 0;
    temp = x;
    while(temp!=0){
        mod = temp%10;
        total += faktorial(mod);
        temp = temp/10;
    }
    if (total == x){
        printf("Y\n");
    }
    else {
        printf("N\n");
    }
    return 0;
}