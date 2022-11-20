/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 21 Oktober 2022 */
/* Topik Praktikum: Pra-Praktikum 7 */
/* Deskripsi: Mengecek apakah palindrom atau bukan */

#include <stdio.h>
#include "stack.h"

int main(){
    int  x;
    Stack S,temp ;
    CreateEmpty(&S);
    CreateEmpty(&temp);
    scanf("%d",&x);
    if (x == 0){
        printf("Stack kosong\n");
    }
    else{
        while (x != 0){
            Push(&S,x);
            Push(&temp,x);
            scanf("%d",&x);
        }
        Stack banding;
        CreateEmpty(&banding);
        int panjang;
        panjang = Top(S);
        int i;
        int y;
        for (i=0;i<=panjang;i++){
            Push(&banding,InfoTop(temp));
            Pop(&temp,&y);
        }

        boolean kondisi = true;
        panjang = Top(S);
        i = 0;
        int a,b;
        while (kondisi && i<=panjang ){
            if (InfoTop(S) != InfoTop(banding)){
                kondisi = false;
            }
            Pop(&S,&a);
            Pop(&banding,&b);
            i++;
        }

        if (Top(S) == 0){
            printf("Palindrom\n");
        }
        else{
            if (kondisi){
                printf("Palindrom\n");
            }
            else{
            printf("Bukan Palindrom\n");
            }
        }
    }
    return 0;
}