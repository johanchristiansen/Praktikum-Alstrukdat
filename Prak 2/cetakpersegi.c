/* NIM: 18221088  */
/* Nama: Johan Christiansen */
/* Tanggal: 9 September 2022 */
/* Topik: Pra Praktikum 2 */
/* Deskripsi: Mencetak sebuah persegi berdasarkan input masukan n */

#include <stdio.h>
int main(){
    int x,sisi,i,j;
    scanf("%d",&x);
    sisi = 2*x-1;
    for(i=1;i<=sisi;i++){
        for(j=1;j<=sisi;j++){
            if(i%2!=0){
                if(j%2!=0){
                    printf("O");
                }
                else{
                    printf("X");
                }
            }
            else{
                if(j%2==0){
                    printf("O");
                }
                else{
                    printf("X");
                }
            }   
        }
        printf("\n");
    }
    return 0;
}