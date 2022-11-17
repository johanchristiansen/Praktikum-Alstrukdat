#include<stdio.h>
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
    printf("%d",faktorial(x));
}