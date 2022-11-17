/* NIM: 18221088  */
/* Nama: Johan Christiansen */
/* Tanggal: 9 September 2022 */
/* Topik: Pra Praktikum 2 */
/* Deskripsi: Menentukan apakah kedua string adalah sama */

#include <stdio.h>
#include <string.h>
int main (){
    /* Kamus */
    char string1[100],string2[100];
    int i,kondisi;
    /* Algoritma */
    kondisi = 0; // Asumsi salah dahulu
    scanf("%s",string1);
    scanf("%s",string2);
    if (strlen(string1)==strlen(string2)){
        for (i=0;i<strlen(string1);i++){
            if (string1[i]!=string2[i] && string1[i]+32 != string2[i] && string2[i]+32 != string1[i]){
                printf("Tidak\n");
                return 0;
            }
        }
        printf("Ya\n");
    }
    else {
        printf("Tidak\n");
    }
    return 0;
}