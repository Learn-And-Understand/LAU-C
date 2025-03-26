#include <stdio.h>

int main() {
    int a, b;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    // Aritmatika
    printf("Penjumlahan: %d + %d = %d\n", a, b, a + b);
    printf("Pengurangan: %d - %d = %d\n", a, b, a - b);
    printf("Perkalian: %d * %d = %d\n", a, b, a * b);
    printf("Pembagian: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    printf("%d * %d - 5 = %d\n", a, b, a * b - 5);

    // Relasional
    printf("Apakah %d == %d? %d\n", a, b, a == b); // 1 = true, 0 = false
    printf("Apakah %d > %d? %d\n", a, b, a > b);

    printf("Apakah %d != %d? %d\n", a, b, a != b);


    return 0;
}