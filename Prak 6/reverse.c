/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 16 Oktober 2022 */
/* Topik Praktikum: Pra - Praktikum 6 */
/* Deskripsi:  Mengimplementasikan reverse.h */

#include <stdio.h>
#include "reverse.h"
#include "circular_queue.h"

void transferReverse(Queue* q1, Queue* q2){
    ElType val;
    int i;
    for (i = Length(*q1)-1;i>=0;i--){
        Push(q2,(*q1).Tab[i]);
        Pop(q1);
    }
}
// Proses: Memindahkan tiap elemen q1 ke q2 dengan urutan yang terbalik
// I.S.: q1 tidak kosong, q2 kosong. q1 dan q2 memiliki panjang yang sama
// F.S.: q1 kosong, q2 berisi elemen-elemen yang tadinya milik q1 dengan urutan yang terbalik
