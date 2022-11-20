/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 21 Oktober 2022 */
/* Topik Praktikum: Pasca Praktikum 6 */
/* Deskripsi:  Mengimplementasikan queue.h */

#include <stdio.h>
#include "queue.h"

int main (){
    Queue q;
    q.idxTail = -1;
    q.idxHead = -1;
    int order = 0;
    int max = 0;
    int min = 0;
    int x,waktu,y;
    scanf("%d",&x);
    while (x!=0){
        if (x==1 && q.idxTail < CAPACITY){
            scanf("%d",&waktu);
            if (waktu>0){
                if (q.idxHead == -1){
                    q.idxHead += 1;
                }
                q.idxTail += 1;
                q.buffer[q.idxTail] = waktu;
            }
        }
        else if (x==2 && q.idxHead <= q.idxTail && q.idxHead != -1 && q.idxTail != -1){
            if (q.idxHead == 0){
                max = q.buffer[q.idxHead];
                min = q.buffer[q.idxHead];
            }
            else{
                if (q.buffer[q.idxHead] > max){
                    max = q.buffer[q.idxHead];
                }
                if (q.buffer[q.idxHead] < min){
                    min = q.buffer[q.idxHead];
                }
            }
            q.idxHead += 1;
            order += 1;
        }
        scanf("%d",&x);
    }
    printf("%d\n",order);
    printf("%d\n",min);
    printf("%d\n",max);
    return 0;
}