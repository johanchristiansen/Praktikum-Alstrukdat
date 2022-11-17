#include <stdio.h>
int main (){
    int bil_cantik,test,x,i,j,temp,cek;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&x);
        bil_cantik = 0;
        for (j=1;j<=x;j++){
            if (j%7 == 0){
                bil_cantik += j;
            }
            else{
                temp = j;
                while (temp % 10 != 7 && temp != 0)
                {
                    temp /= 10;
                }
                if (temp != 0)
                {
                    bil_cantik += j;
                }
            }
        }
        printf("%d\n",bil_cantik);
        bil_cantik = 0;
    }
    return 0;
}