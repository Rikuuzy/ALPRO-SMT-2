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
    char kotaInput[20];  // Menyimpan input string
    int indexKota = -1;  // Menyimpan indeks kota yang dimasukkan

    printf("Masukkan nama kota (Jakarta, Semarang, Pati): ");
    scanf("%s", kotaInput);

    // Mencari indeks kota berdasarkan input
    for (i = 0; i < 3; i++) {
        if (strcmp(kotaInput, kota[i]) == 0) {
            indexKota = i;
        }
    }

    // Cek apakah input kota valid
    if (indexKota == -1) {
        printf("Input kota tidak valid.\n");
    }

    // Tampilkan data penjualan untuk kota yang valid
    printf("\nPenjualan untuk kota %s:\n", kota[indexKota]);
    for (int i = 0; i < 4; i++) {  // Loop untuk menampilkan penjualan di keempat bulan
        printf("- %s: %d\n", bulan[i], data[indexKota][i]);
    }

    return 0;
}
