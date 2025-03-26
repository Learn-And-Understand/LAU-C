#include <stdio.h>

int main() {
    int angka;

    // Contoh while
    printf("Masukan angka positif (masukkan angka negatif untuk berhenti):\n");
    scanf("%d", &angka);

    while(angka >= 0) {
        printf("Kamu masukkan: %d\n", angka);
        scanf("%d", &angka);
    }
    printf("Program berhenti karena kamu memasukkan angka negatif.\n");

    // Contoh do-while
    int tebakan;
    printf("\nTebak angka antara 1-5 (kamu punya banyak kesempatan):\n");
    do {
        scanf("%d", &tebakan);
        if(tebakan == 3) {
            printf("Selamat, tebakan kamu benar!\n");
        } else {
            printf("Tebakan kamu salah!\n");
        }
    } while (tebakan != 3);

    return 0;
}