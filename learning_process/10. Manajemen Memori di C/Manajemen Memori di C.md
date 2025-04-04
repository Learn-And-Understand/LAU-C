### Manajemen Memori di C
Di C, kita bisa mengalokasikan memori secara dinamis (saat program berjalan) menggunakan fungsi seperti `malloc` dan `calloc`, lalu membebaskannya dengan `free`. Ini penting saat kita tidak tahu ukuran data saat kompilasi.

#### Fungsi Utama
- `malloc(size)`: Mengalokasikan memori sebesar `size` byte, mengembalikan pointer ke memori tersebut.
- `calloc(n, size)`: Mengalokasikan memori untuk `n` elemen, masing-masing sebesar `size` byte, dan menginisialisasi ke `0`.
- `free(ptr)`: Membebaskan memori yang dialokasikan.

#### Program Contoh
Coba kode ini:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int* array;

    // Minta jumlah elemen
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    // Alokasi memori
    array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Alokasi memori gagal!\n");
        return 1;
    }

    // Isi array
    for (int i = 0; i < n; i++) {
        printf("Masukkan elemen ke-%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Cetak array
    printf("Isi array:\n");
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Bebaskan memori
    free(array);

    return 0;
}
```

#### Penjelasan:
- `malloc(n * sizeof(int))`: Mengalokasikan memori untuk `n` elemen bertipe `int`.
- `if (array == NULL)`: Mengecek apakah alokasi gagal.
- `free(array)`: Membebaskan memori agar tidak terjadi *memory leak*.

#### Tugas Keduabelas:
1. Salin dan jalankan kode di atas. Coba masukkan `3` sebagai jumlah elemen, lalu isi dengan angka seperti `10`, `20`, `30`.
2. Modifikasi program:
   - Ubah agar menggunakan `calloc` alih-alih `malloc` (perhatikan perbedaan inisialisasi).
   - Tambahkan perhitungan jumlah total dari elemen array sebelum membebaskan memori, lalu cetak hasilnya.
   - Tambahkan pointer ke `struct Mahasiswa` yang dialokasikan secara dinamis, isi nama dengan input pengguna, dan cetak datanya.