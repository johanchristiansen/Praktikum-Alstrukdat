// NIM : 18221092
// Nama : Dwicakra Danielle
// Tanggal : 14 Oktober 2022
// Topik Praktikum : pra praktikum
// Deskripsi : implementasi reverse.h

# include <stdio.h>
# include <stdlib.h>
# include "reverse.h"
# include "circular_queue.h"

void transferReverse(Queue* q1, Queue* q2)
// Proses: Memindahkan tiap elemen q1 ke q2 dengan urutan yang terbalik
// I.S.: q1 tidak kosong, q2 kosong. q1 dan q2 memiliki panjang yang sama
// F.S.: q1 kosong, q2 berisi elemen-elemen yang tadinya milik q1 dengan urutan yang terbalik
{
  ElType val;
  int i = 0;
  int len = Length(*q1);
  *q2 = CreateQueue(q1->MaxEl);
  q2->TAIL = q1->TAIL;
  q2->HEAD = q1->HEAD;
  while (i < len){
    val = Pop(q1);
    q2->Tab[((q2->MaxEl)+(q2->TAIL)-i)%q2->MaxEl] = val;
    i++;
  }
  
}    ElType x;
    int i,j;
    for (i= Length(*q1)-1;i>=0;i--)
    {
        Push( q2 , (*q1).Tab[i]);
    }    
    j = Length(*q1)-1;
    for (j;j>=0;j--)
    {
        Pop(q1);
    }
