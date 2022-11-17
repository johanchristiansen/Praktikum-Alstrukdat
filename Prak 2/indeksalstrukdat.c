#include <stdio.h>
int main (){
    int x,i,lulus;
    float total_nilai,mahasiswa,average;
    char index;
    scanf("%d",&x);
    total_nilai = 0;
    mahasiswa = 0;
    lulus = 0;
    while (x != -999){
        if (x>=0 && x<=4){
            total_nilai += x;
            mahasiswa += 1;
            if (x>=3){
                lulus += 1;
            }
        else{
            total_nilai += 0;
            mahasiswa += 0;
        }
        }
        scanf("%d",&x);
    }
    average = total_nilai/mahasiswa;
    if (mahasiswa > 0){
        if (average == 4){
            index = 'A';
        }
        else if (average >= 3 && average < 4){
            index = 'B';
        }
        else if (average >= 2 && average <3){
            index = 'C';
        }
        else if (average >= 1 && average <2){
            index = 'D';
        }
        else if (average >= 0 && average <1){
            index = 'E';
        }
        printf("Jumlah mahasiswa yang lulus = %d\n",lulus);
        printf("Nilai rata-rata = %.2f\n",average);
        printf("Indeks akhir kelas = %c\n",index);
    }
    else{
        printf("Tidak ada data\n");
    }

    return 0;
}