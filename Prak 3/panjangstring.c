/* NIM: 18221088  */
/* Nama: Johan Christiansen */
/* Tanggal:18 September 2022 */
/* Topik: Pra Praktikum 3 */
/* Deskripsi: Mengimplementasikan panjangstring.h */

#include <stdio.h>
#include "panjangstring.h"

int panjangString(char*s){
    /* KAMUS LOKAL */
    int total = 0;
    /* Algoritma */
    while (*s != '\0'){
        total += 1;
        s += 1;
    }
    return total;
}