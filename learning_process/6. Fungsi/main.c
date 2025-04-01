#include <stdio.h>

// Fungsi tanpa parameter
void sayHello(char nama[]) {
    printf("Halo, %s!\n", nama);
}

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    char nama[20];

    // Panggil fungsi sayHello
    printf("Masukkan nama kamu: ");
    scanf("%s", nama);
    sayHello(nama);

    // Panggil fungsi tambah
    printf("Masukkan dua angka: ");
    scanf("%d %d", &x, &y);
    int hasil_tambah = tambah(x, y);
    printf("%d + %d = %d\n", x, y, hasil_tambah);
    
    // Panggil fungsi kurang
    printf("Masukkan dua angka: ");
    scanf("%d %d", &x, &y);
    int hasil_kurang = kurang(x, y);
    printf("%d - %d = %d\n", x, y, hasil_kurang);

    return 0;
}