/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 16 Oktober 2022 */
/* Topik Praktikum: Pra - Praktikum 6 */
/* Deskripsi:  Mengimplementasikan queue.h */

#include <stdio.h>
#include "queue.h"

Queue tanpaBomb(Queue queue, ElType bomb){
    Queue q;
    CreateQueue(&q);
    int i;
    for (i=0;i<length(queue);i++){
        if (queue.buffer[i] != bomb){
            enqueue(&q,queue.buffer[i]);
        }
    }
    displayQueue(q);
}
/* Mengembalikan sebuah queue yang sudah tidak memiliki nilai bomb */

/*
    Contoh input:
        queue : [2,3,4,5,6] // 2 adalah head, 6 adalah tail
        bomb : 3
    Contoh output: [2,4,5,6]

    Contoh input:
        queue : [2,3,4,5,6] // 2 adalah head, 6 adalah tail
        bomb : 7
    Contoh output: [2,3,4,5,6]
*/