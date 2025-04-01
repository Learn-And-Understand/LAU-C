# Perulangan `while` dan `do-while`

#### 1. Perulangan `while`
Sintaks:
```c
while (kondisi) {
    // Kode yang diulang selama kondisi benar
}
```
`while` akan terus berjalan selama kondisinya benar. Jika kondisi salah dari awal, kode di dalamnya tidak akan dijalankan.

#### 2. Perulangan `do-while`
Sintaks:
```c
do {
    // Kode yang diulang
} while (kondisi);
```
Bedanya dengan `while`, `do-while` akan menjalankan kode minimal satu kali sebelum mengecek kondisi.

#### Program Contoh
Coba kode ini:

```c
#include <stdio.h>

int main() {
    int angka;

    // Contoh while
    printf("Masukkan angka (masukkan 0 untuk berhenti):\n");
    scanf("%d", &angka);
    while (angka != 0) {
        printf("Kamu memasukkan: %d\n", angka);
        scanf("%d", &angka);
    }
    printf("Program berhenti karena kamu memasukkan 0.\n");

    // Contoh do-while
    int tebakan;
    printf("\nTebak angka antara 1-5 (kamu punya 1 kesempatan):\n");
    do {
        scanf("%d", &tebakan);
        if (tebakan == 3) {
            printf("Selamat, tebakanmu benar!\n");
        } else {
            printf("Salah, angka yang benar adalah 3.\n");
        }
    } while (tebakan == 3); // Hanya lanjut jika benar

    return 0;
}
```

#### Penjelasan:
- **`while`**: Program meminta input berulang sampai pengguna memasukkan `0`.
- **`do-while`**: Memberi satu kesempatan menebak angka (di sini saya set angka benar adalah `3`).

#### Tugas Ketujuh:
1. Salin dan jalankan kode di atas. Coba masukkan beberapa angka di bagian `while` (misalnya `5`, `10`, lalu `0`), lalu tebak angka di bagian `do-while` (misalnya `4`, lalu `3`).
2. Modifikasi program:
   - Ubah bagian `while` agar hanya menerima angka positif (jika negatif, program berhenti).
   - Ubah bagian `do-while` agar pengguna bisa menebak sampai benar (bukan berhenti saat salah).