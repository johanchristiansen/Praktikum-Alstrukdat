/* NIM: 18221088  */
/* Nama: Johan Christiansen */
/* Tanggal: 3 September 2022 */
/* Topik: Praktikum 1 */
/* Deskripsi: Menerima masukkan detik dan mengeluarkan keluaran dalam format jam, menit, dan detik.   */

#include <stdio.h>
int main(){
    /* Kamus */
    int total_detik;
    int jam;
    int menit;
    int detik;
    /* Algoritma */
    scanf("%d",&total_detik);
    if (total_detik>=3600){
        jam = total_detik / 3600;
        menit = (total_detik - (jam*3600))/60;
        detik = total_detik - (jam*3600) - (menit*60);
        printf ("%d detik = %d jam %d menit %d detik\n",total_detik,jam,menit,detik);
    }
    else {
        jam = 0;
        if (total_detik >=60){
            menit = total_detik / 60;
            detik = total_detik - (menit*60);
            printf ("%d detik = %d jam %d menit %d detik\n",total_detik,jam,menit,detik);
        }
        else {
            menit = 0;
            detik = total_detik;
            printf ("%d detik = %d jam %d menit %d detik\n",total_detik,jam,menit,detik);
        }
    }
    return 0;

}