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

    int N; // input 1 = Jakarta, 2 = Semarang, 3 = Pati
    int indexKota = -1;  // Menyimpan indeks kota yang dimasukkan

    printf("Masukkan nomor kota (1: Jakarta, 2: Semarang, 3: Pati): ");
    scanf("%d", &N);

    if (N < 1 || N > 3) {
        printf("Input kota tidak valid.\n");
    }
    indexKota = N - 1;
    
    printf("\nPenjualan untuk kota %s:\n", kota[indexKota]);
    for (int i = 0; i < 4; i++) {
        printf("- %s: %d\n", bulan[i], data[indexKota][i]);
    }

    return 0;
}
