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
    float avg[4];
    for ( j = 0; j < 4; j++)
    {
        total = 0;
        for (i = 0; i < 3; i++)
        {
            total += data[i][j];
        }
        avg[j] = total / 3.0;
        if (avg[j] > MaxAvg)
        {
            MaxAvg = avg[j];
            avgmax = j;
        }
    }
    printf("Bulan Januari : %f\n",avg[0]);
    printf("Bulan Februari : %f\n",avg[1]);
    printf("Bulan Maret: %f\n",avg[2]);
    printf("Bulan April: %f\n",avg[3]);

    printf("Penjualan terbesar berada di Bulan : %s \n", bulan[avgmax]);
    return 0;
}
