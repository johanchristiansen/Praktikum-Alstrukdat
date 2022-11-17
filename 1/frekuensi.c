#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    int i, j;
    char frekuensi[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%s",&str);
    for(i=0;i<=strlen(str);i++){
        if (str[i]=='0'){
            frekuensi[0] += 1;
        }
        else if (str[i]=='1'){
            frekuensi[1] += 1;
        }
        else if (str[i]=='2'){
            frekuensi[2] += 1;
        }
        else if (str[i]=='3'){
            frekuensi[3] += 1;
        }
        else if (str[i]=='4'){
            frekuensi[4] += 1;
        }
        else if (str[i]=='5'){
            frekuensi[5] += 1;
        }
        else if (str[i]=='6'){
            frekuensi[6] += 1;
        }
        else if (str[i]=='7'){
            frekuensi[7] += 1;
        }
        else if (str[i]=='8'){
            frekuensi[8] += 1;
        }
        else if (str[i]=='9'){
            frekuensi[9] += 1;
        }
    }
    for(j=0;j<=8;j++){
        printf("%d",frekuensi[j]);
    }
    printf("%d\n",frekuensi[9]);

    return 0;
}