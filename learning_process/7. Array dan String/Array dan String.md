# Array dan String di C
- **Array**: Kumpulan data dengan tipe yang sama, disimpan dalam urutan.
- **String**: Array khusus dari karakter (`char`), diakhiri dengan `\0` (null terminator).

#### Contoh Array
```c
int angka[5] = {1, 2, 3, 4, 5}; // Array dengan 5 elemen
```

#### Contoh String
```c
char nama[10] = "Aerell"; // String dengan maksimal 9 karakter + \0
```

#### Program Contoh
Coba kode ini:

```c
#include <stdio.h>

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    char nama[20];

    // Cetak array
    printf("Elemen array:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    // Input dan cetak string
    printf("\nMasukkan nama kamu: ");
    scanf("%s", nama); // Tanpa & karena nama sudah alamat array
    printf("Halo, %s!\n", nama);

    return 0;
}
```

#### Penjelasan:
- `angka[5]`: Array dengan 5 elemen, diakses dengan indeks (0 sampai 4).
- `scanf("%s", nama)`: Membaca string, tidak perlu `&` karena `nama` adalah pointer ke elemen pertama array.

#### Tugas Kesembilan:
1. Salin dan jalankan kode di atas. Masukkan nama kamu saat diminta.
2. Modifikasi program:
   - Tambahkan array baru untuk menyimpan 3 nilai (misalnya `float nilai[3]`), minta input dari pengguna untuk setiap elemen.
   - Cetak semua nilai dalam array tersebut dengan loop.
   - Tambahkan perhitungan rata-rata dari ketiga nilai tersebut dan cetak hasilnya.