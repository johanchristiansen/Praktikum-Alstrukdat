/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 22 September 2022 */
/* Topik praktikum: Pasca Praktikum 3 */
/* Deskripsi: Mengimplementasikan jumlahkonsonanvokal.h */
#include <stdio.h>
#include <ctype.h>

void jumlahKonsonanVokal(char*s, int*a, int*b){
    int konsonan = 0;
    int vokal = 0;
    while((*s) != '\0' ){
        if (isalpha(*s) == 0 ){
            s++;
        } else {
            if (((*s) == 'A') || ((*s) == 'E') || ((*s) == 'I') || ((*s) == 'O') || ((*s) == 'U') || ((*s) == 'a') || ((*s) == 'e') || ((*s) == 'i') || ((*s) == 'o') || ((*s) == 'u')){
                vokal ++;
            } else {
            konsonan++;
            }
            s++;

        }

    (*a) = konsonan;
    (*b) = vokal;
}
}
