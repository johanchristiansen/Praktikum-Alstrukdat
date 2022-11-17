#include <stdio.h>
int main(){
    int x,temp,hasil;
    scanf("%d",&x);
    temp = x;
    while (temp/10 != 0){
        hasil = temp%10;
        printf("%d",hasil);
        temp = temp/10;
    }
    printf("%d\n",temp);
    return 0;
}