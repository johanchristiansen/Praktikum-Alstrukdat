/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 29 September 2022 */
/* Topik Praktikum: Pasca Praktikum 4 */
/* Deskripsi: Mengimplementasikan MinMax.h */

#include <stdio.h>
#include "MinMax.h"

List MinMax(List L){
    int min,max,imax,imin,i;
    imax = 0;
    imin = 0;
    min = L.A[0];
    max = L.A[0];
    for (i=1;i<Length(L);i++){
        if (L.A[i] > max){
            max = L.A[i];
            imax = i;
        }
        if (L.A[i] < min){
            min = L.A[i];
            imin = i;
        }
    }
    if (imax == imin){
        DeleteAt(&L,imin);
        InsertLast(&L,max);
    }
    else if (imax > imin) {
        DeleteAt(&L,imax);
        DeleteAt(&L,imin);
        InsertLast(&L,min);
        InsertLast(&L,max);
    }
    else{
        DeleteAt(&L,imin);
        DeleteAt(&L,imax);
        InsertLast(&L,min);
        InsertLast(&L,max);        
    }
    return L;
}