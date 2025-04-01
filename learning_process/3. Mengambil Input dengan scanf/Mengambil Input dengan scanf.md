# Mengambil Input dengan `scanf`
Fungsi `scanf` digunakan untuk membaca input dari pengguna melalui terminal. Sintaks dasarnya:
```c
scanf("format", &variabel);
```
- `&`: Operator untuk mengambil alamat memori variabel (diperlukan untuk `scanf`).
- Formatnya sama seperti `printf` (`%d`, `%f`, `%c`, dll.).

#### Program Contoh
Coba kode ini di VS Code:

```c
#include <stdio.h>

int main() {
    int umur;
    float tinggi;
    char inisial;

    printf("Masukkan umur kamu: ");
    scanf("%d", &umur);

    printf("Masukkan tinggi kamu (dalam cm): ");
    scanf("%f", &tinggi);

    printf("Masukkan inisial kamu: ");
    scanf(" %c", &inisial); // Spasi sebelum %c untuk menghindari bug enter

    printf("\nData kamu:\n");
    printf("Umur: %d tahun\n", umur);
    printf("Tinggi: %.1f cm\n", tinggi);
    printf("Inisial: %c\n", inisial);

    return 0;
}
```

#### Penjelasan:
1. Variabel dideklarasikan tanpa nilai awal karena kita akan isi dengan input.
2. `scanf("%d", &umur)`: Membaca bilangan bulat dan menyimpannya di `umur`.
3. `scanf(" %c", &inisial)`: Spasi sebelum `%c` penting untuk membersihkan karakter newline dari input sebelumnya.
4. Output menampilkan data yang dimasukkan pengguna.

#### Tugas Ketiga:
1. Salin dan jalankan kode di atas di VS Code.
2. Masukkan data dirimu atau temanmu saat program meminta input.
3. Coba ubah programnya:
   - Tambahkan variabel baru, misalnya `int tahun_lahir`.
   - Minta input untuk `tahun_lahir` dengan `scanf`.
   - Cetak hasilnya dengan `printf`.