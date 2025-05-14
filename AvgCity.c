/*Nama File 	: AvgCity.c*/
/*Deskripsi 	: MMencari kota dengan rata-rata penjualan terbesar */
/*Pembuat   	: Hadrian Shandhy Yudha - 24060124140207*/
/*Tgl Pembuatan	: 14 Mei 2025 */
#include <stdio.h>

int main() {
    char* kota[3] = {"Jakarta", "Semarang", "Pati"};
    char* bulan[4] = {"Januari", "Februari", "Maret", "April"};

    int data[3][4] = {
        {10, 20, 15, 15},  // Jakarta
        {7, 10, 8, 3},   // Semarang
        {10, 10, 12, 8}     // Pati
    };

    int total, // menyimpan operasi iterasi
    i, // counter
    j; // counter
    int MaxAvg = 0; // menyimpan rata-rata
    int avgmax; // menyimpan indeks
    float avg[3];
    for ( i = 0; i < 3; i++)
    {
        total = 0;
        for (j = 0; j < 4; j++)
        {
            total += data[i][j];
        }
        avg[i] = total / 4.0;
        if (avg[i] > MaxAvg)
        {
            MaxAvg = avg[i];
            avgmax = i;
        }
    }
    printf("Kota Jakarta : %f\n",avg[0]);
    printf("Kota Semarang : %f\n",avg[1]);
    printf("Kota Pati : %f\n",avg[2]);

    printf("Penjualan terbesar berada di Kota : %s \n", kota[avgmax]);
    return 0;
}
