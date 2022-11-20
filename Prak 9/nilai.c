/*
NIM: 18221088
Nama: Johan Christiansen
Tanngal: 6 November 2022
Topik Praktikum: Pra Praktikum 9
Deskripsi: Mengimplementasikan listlinier.h untuk daftar nilai mata kuliah
*/

#include <stdio.h>
#include "listlinier.h"

int main(){
    List l;
    CreateEmpty(&l);
    int nilai;
    scanf("%d",&nilai);

    while (nilai>=0 && nilai<=100){
        InsVFirst(&l,nilai);
        scanf("%d",&nilai);
    }

    if (!IsEmpty(l)){
        printf("%d\n",NbElmt(l));
        printf("%d\n",Max(l));
        printf("%d\n",Min(l));
        printf("%.2f\n",Average(l));
        InversList(&l);
        PrintInfo(l);
        printf("\n");
        InversList(&l);
        PrintInfo(l);
        printf("\n");
    }

    else{
        printf("Daftar nilai kosong\n");
    }

    return 0;
}