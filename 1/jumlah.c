/* NIM: 18221088  */
/* Nama: Johan Christiansen */
/* Tanggal: 9 September 2022 */
/* Topik: Pra Praktikum 2 */
/* Deskripsi: Menerima input integer dan menghasilkan jumlah bilangan tersebut */

#include <stdio.h>
int main(){
    int x;
    int temp;
    int sisa;
    int total;
    scanf("%d",&x);
    temp = x;
    total = 0;
    if (x/10 != 0){
        while (temp != 0){
            sisa = temp%10;
            total += sisa;
            temp = temp/10;
        }
        printf("%d\n",total);
    }
    else {
        printf("%d\n",x);
    }
    return 0;
}