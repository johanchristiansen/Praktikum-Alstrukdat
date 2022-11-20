/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 30 Oktober 2022 */
/* Topik Praktikum: Pra-Praktikum 8 */
/* Deskripsi: Mengimplementasikan hashmap.h */

#include <stdio.h>
#include "hashmap.h"

/* Definisi HashMap M kosong : M.Count = Nil */
/* M.Count = jumlah element HashMap */
/* M.Elements = tempat penyimpanan element HashMap */

/* ********* Prototype ********* */

/* *** Konstruktor/Kreator *** */
void CreateEmpty(HashMap *M){
    (*M).Count = Nil;
    int i;
    for (i=0;i<MaxEl;i++){
        (*M).Elements[i].Key = Undefined;
        (*M).Elements[i].Value = Undefined;
    }
}
/* I.S. Sembarang */
/* F.S. Membuat sebuah HashMap M kosong berkapasitas MaxEl */
/* Ciri HashMap kosong : count bernilai Nil dengan seluruh isi key & value map Undefined */

/* *** Index Penyimpanan dengan modulo *** */
address Hash(keytype K){
    return (K % MaxEl);
}
/* Menghasilkan indeks penyimpanan dengan operasi modulo ke MaxEl */

/* ********** Operator Dasar HashMap ********* */
valuetype Value(HashMap M, keytype k){
    boolean found = false;
    int i = 0;
    while (!found && i<MaxEl){
        if (M.Elements[i].Key == k){
            found = true;
        }
        i ++;
    }
    if (found){
        return M.Elements[i-1].Value;
    }
    else{
        return Undefined;
    }
}

/* Mengembalikan nilai value dengan key k dari M */
/* Jika tidak ada key k pada M, akan mengembalikan Undefined */

void Insert(HashMap *M, keytype k, valuetype v){
    boolean found = false;
    int i = 0;
    while (!found && i<=(*M).Count-1){
        if ((*M).Elements[i].Key == k){
            found = true;
            (*M).Elements[i].Value = v;
        }
        i ++;
    }
    if (!found){
        int idx = Hash(k);
        while ((*M).Elements[idx].Key != Undefined){
            idx =  Hash(idx+1);
        }
        (*M).Elements[idx].Key = k;
        (*M).Elements[idx].Value = v;
        (*M).Count += 1;
    }
}
/* Menambahkan Elmt sebagai elemen HashMap M. */
/* I.S. M mungkin kosong, M tidak penuh
        M mungkin sudah beranggotakan v dengan key k */
/* F.S. v menjadi anggota dari M dengan key k. Jika k sudah ada, operasi tidak dilakukan 
        index yang digunakan untuk menyimpan v adalah hash dari k
        gunakan open addressing linear probing dengan interval 1 jika index sudah terisi    */