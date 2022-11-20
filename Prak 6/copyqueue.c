/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 21 Oktober 2022 */
/* Topik Praktikum: Pasca Praktikum 6 */
/* Deskripsi:  Mengimplementasikan copyqueue.h */

#include <stdio.h>
#include "copyqueue.h"

// Menyalin queue.
void copyQueue(Queue *queueInput, Queue *queueOutput){
    int i;
    int x;
    CreateQueue(queueOutput);
    int panjang = length(*queueInput);
    for (i=0;i<panjang;i++){
        enqueue(queueOutput,HEAD(*queueInput));
        enqueue(queueInput,HEAD(*queueInput));
        dequeue(queueInput,&x);
    }
}
/* Proses: Menyalin isi dari queueInput ke queueOutput */
/* I.S. queueInput mungkin kosong, tabel penampung elemen queueInput TIDAK penuh */
/* F.S. queueOutput memiliki isi queue yang sama */
/*
    Contoh input:
    queueInput : [2,3,4,5,6] // 2 adalah head, 6 adalah tail
    queueOutput: queue kosong

    Contoh output:
    queueInput:  [2,3,4,5,6]
    queueOutput: [2,3,4,5,6]
*/

/*
    Catatan
    - Hati-hati jangan sampai algoritma Anda mengubah hasil akhir dari queueInput juga.
      Elemen di queueInput harus tetap sama setelah algoritma dijalankan.
    Hint
    - Buat queue baru selain queueInput dan queueOutput untuk tempat penyimpanan
      queueInput sementara.
*/