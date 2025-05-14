/*Nama File 	: AvgCity.c*/
/*Deskripsi 	: MMencari kota dengan rata-rata penjualan terbesar */
/*Pembuat   	: Hadrian Shandhy Yudha - 24060124140207*/
/*Tgl Pembuatan	: 14 Mei 2025 */
#include <stdio.h>
#include <string.h>  // Untuk fungsi strcmp

int main() {
    char* kota[3] = {"Jakarta", "Semarang", "Pati"};
    char* bulan[4] = {"Januari", "Februari", "Maret", "April"};
    int data[3][4] = {
        {10, 20, 15, 15},  // Jakarta
        {7, 10, 8, 3},     // Semarang
        {10, 10, 12, 8}    // Pati
    };
    int i;
    char bulanInput[20]; // meyimpan input string
    int indexBulan = -1;  // Menyimpan indeks bulan yang dimasukkan

    printf("Masukkan nama bulan (Januari, Februari, Maret, April): ");
    scanf("%s", bulanInput);

    // Mencari indeks bulan tanpa menggunakan break
    for (i = 0; i < 4; i++)
    {
        if (strcmp(bulanInput, bulan[i]) == 0)
        {
            indexBulan = i;
        }
    }

    // Cek apakah input bulan valid
    if (indexBulan == -1) {
        printf("Input bulan tidak valid.\n");
    }

    // Tampilkan data penjualan
    printf("\nPenjualan pada bulan %s:\n", bulan[indexBulan]);
    for (int j = 0; j < 3; j++) {
        printf("- %s: %d\n", kota[j], data[j][indexBulan]);
    }

    return 0;
}
