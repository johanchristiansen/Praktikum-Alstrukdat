/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 30 September 2022 */
/* Topik Praktikum: Pra Praktikum 5 */
/* Deskripsi: Membuat fungsi hitung karakter */

#include <stdio.h>
#include "mesinkarakter.h"

int hitungkarakter(char karakter){
    int count = 0;
    START();
    while (GetCC() != MARK) {
        if (GetCC() == karakter){
            count += 1;
        }
        ADV();
    }
    return count;
}