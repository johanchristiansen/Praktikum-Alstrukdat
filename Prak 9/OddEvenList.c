/*
NIM: 18221088
Nama: Johan Christiansen
Tanngal: 6 November 2022
Topik Praktikum: Pra Praktikum 9
Deskripsi: Mengimplementasikan OddEvenList.h
*/

#include <stdio.h>
#include "OddEvenList.h"

void OddEvenList(List L, List *Odd, List *Even){
    List otemp,etemp;
    CreateEmpty(&otemp);
    CreateEmpty(&etemp);
    CreateEmpty(*(&Odd));
    CreateEmpty(*(&Even));
    address p = First(L);
    while(p!=Nil){
        if(Info(p)%2==0){
            InsVLast(&etemp,Info(p));       
        }
        else{
            InsVLast(&otemp,Info(p));
        }
        p=Next(p);
    }
    while(!IsEmpty(etemp)){
        InsVLast(*(&Even),Min(etemp));
        DelP (&etemp, Min(etemp));
    }
     while(!IsEmpty(otemp)){
        InsVLast(*(&Odd),Min(otemp));
        DelP (&otemp, Min(otemp));
    }
}
    /* Memisahkan elemen ganjil dan genap dari list L kedalam dua list baru secara mengurut membesar*/
    /* I.S: List L TIDAK mungkin kosong dan memiliki nilai lebih dari sama dengan 0(value>=0), List Odd dan Even kosong*/
    /* F.S: List Odd memiliki elemen bernilai ganjil mengurut membesar, List Even memiliki elemen bernilai genap mengurut membesar
            List L TIDAK PERLU DIDEALOKASI*/
    /*Contoh:
        Input:
            L: [0,3,1,4,5]
            Odd: []
            Even: []
        Output:
            L: [0,3,1,4,5]
            Odd: [1,3,5]
            Even: [0,4] */
    /*Note: 
        1. Bilangan 0 merupakan bilangan genap
        2. Buatlah List Odd dan Even terlebih dahulu*/
 