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
        {7, 10, 8, 3},     // Semarang
        {10, 10, 12, 8}    // Pati
    };

    int total, // menyimpan operasi iterasi
    i, // counter
    j; // counter
    int nilaiMin = data[0][0]; // array[kota][bulan] of integer
    int mini = 0; // memyimpan minimum i
    int minj = 0; // memyimpan minimum j

    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (data[i][j] < nilaiMin)
            {
                nilaiMin = data[i][j];
                mini = i;
                minj = j;
            }
            
        }
        
    }
    printf("Penjualan terendah : %d\n",nilaiMin);
    printf("Kota: %s\n",kota[mini]);
    printf("Bulan: %s\n",bulan[minj]);
    return 0;
}
