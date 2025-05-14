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

    int N; // input 1 = Januari, 2 = Februari, 3 = Maret, 4 = April
    int indexBulan = -1;  // Menyimpan indeks bulan yang dimasukkan

    printf("Masukkan nomor bulan (1-4): ");
    scanf("%d", &N);

    // Cek apakah input valid
    if (N < 1 || N > 4) {
        printf("Input bulan tidak valid.\n");
    }
    indexBulan = N - 1; 
    printf("\nPenjualan pada bulan %s:\n", bulan[indexBulan]);
    for (int i = 0; i < 3; i++) {
        printf("- %s: %d\n", kota[i], data[i][indexBulan]);
    }

    return 0;
}
