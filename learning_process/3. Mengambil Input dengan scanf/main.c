#include <stdio.h>

int main() {
    int umur;
    float tinggi;
    char inisial;
    int tahun_lahir;

    printf("Masukkan umur kamu: ");
    scanf("%d", &umur);

    printf("Masukkan tinggi kamu (dalam cm): ");
    scanf("%f", &tinggi);

    printf("Masukkan inisial kamu: ");
    scanf(" %c", &inisial); // Spasi sebelum tanda &c untuk menghindari bug enter.

    printf("Masukkan tahun lahir kamu: ");
    scanf("%d", &tahun_lahir);

    printf("\nData kamu:\n");
    printf("Umur: %d tahun\n", umur);
    printf("Tinggi: %.1f cm\n", tinggi);
    printf("Inisial: %c\n", inisial);
    printf("Tahun lahir: %d\n", tahun_lahir);

    return 0;
}