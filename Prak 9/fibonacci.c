#include <stdio.h>
#include "listlinier.h"

int main() {
    List fibonacci;
    CreateEmpty(&fibonacci);
    infotype el;
    scanf("%d", &el);
    // Masukkan kode program disini
    if (el == 0) {
        // Masukkan kode program disini
        PrintInfo(fibonacci);
        return 0;
    } 
    else if (el == 1) {
        // Masukkan kode program disini
        int a;
        scanf("%d",&a);
        InsVFirst(&fibonacci,a);
        PrintInfo(fibonacci);
        return 0;
    } 
    else if (el == 2)
    {
        int a;
        /*menuliskan list fibonacci dengan 2 elemen*/
        scanf("%d", &a);
        InsVLast(&fibonacci,a);
        scanf("%d", &a);
        InsVLast(&fibonacci,a);
        PrintInfo(fibonacci);
        return 0;
    }
    else {
        /*menuliskan list fibonaci apabila tediri dari lebih dari 2 element*/
        // Masukkan kode program disini
        int a;
        address P1,P2;
        int i = 0;
        scanf("%d",&a);
        InsVLast(&fibonacci,a);
        scanf("%d",&a);
        InsVLast(&fibonacci,a);
        P1 = First(fibonacci);
        P2 = Next(P1); /*node berikutnya*/
        i = 2;
        infotype sum; 
        while (i < el)
        {
            sum = Info(P1)+Info(P2); /*elemen berikutnya penjumlahan dari elemen sebelumnya*/
            InsVLast(&fibonacci, sum);
            P1 = Next(P1);
            P2 = Next(P2);
            i ++;
        }
        PrintInfo(fibonacci);
    }
    return 0;
}