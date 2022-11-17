/* NIM: 18221088 */
/* Nama: Johan Christiansen */
/* Tanggal: 29 September 2022 */
/* Topik Praktikum: Pasca Praktikum 4 */
/* Deskripsi: Membuat program penjulahan array tak hingga */

#include <stdio.h>

int main(){
    int i,j,n,q,l,r;
    int arrayloop [1000];
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&arrayloop[i]);
    }
    for (i=n+1;i<=1000;i++){
        arrayloop[i] = arrayloop[i-n];
    }

    scanf("%d",&q);

    for(i=1;i<=q;i++){
        scanf("%d %d",&l,&r);
        int total = 0;
        for (j=l;j<=r;j++){
            total += arrayloop[j];
        }
        printf("%d\n",total);
    }

    return 0;

}