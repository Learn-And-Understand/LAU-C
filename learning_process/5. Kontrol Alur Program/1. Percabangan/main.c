#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    if(angka > 0) {
        printf("%d adalah angka positif.\n", angka);
    } else if(angka < 0) {
        printf("%d adalah angka negatif.\n", angka);
    } else {
        printf("Angka adalah nol.\n");
    }

    if(angka % 2 == 0) {
        printf("%d adalah genap.\n", angka);
    } else {
        printf("%d adalah ganjil.\n", angka);
    }

    return 0;
}