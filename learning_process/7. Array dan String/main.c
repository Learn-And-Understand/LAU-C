#include <stdio.h>

float ratarata(float* array, size_t size) {
    float nilai = 0;
    for(int i = 0; i < size; i++) {
        nilai += *(array + i);
    }
    return nilai / size;
}

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    float angka2[3] = {20.5, 11.2, 34.6};
    char nama[20];

    // Cetak array
    printf("Element array\n");
    for(int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    // Cetak array ke-2
    printf("Element array ke-2\n");
    for(int i = 0; i < 3; i++) {
        printf("angka2[%d] = %.1f\n", i, angka2[i]);
    }

    // Perhitungan rata rata dari angka2
    printf("Perhitungan rata-rata dari angka2: %.1f\n", ratarata(angka2, 3));

    // Input dan cetak string
    printf("\nMasukkan nama kamu: ");
    scanf("%s", nama);
    printf("Halo, %s!\n", nama);

    return 0;
}