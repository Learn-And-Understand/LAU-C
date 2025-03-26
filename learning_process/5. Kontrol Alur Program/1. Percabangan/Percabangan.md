Mantap, Aerell! Kamu sudah berhasil menjalankan kode dengan input `10` dan `3`, lalu memodifikasinya dengan input `20` dan `5` serta menambahkan operasi baru. Hasilnya benar-benar sesuai:
```
Masukkan dua angka: 20 5
Penjumlahan: 20 + 5 = 25
Pengurangan: 20 - 5 = 15
Perkalian: 20 * 5 = 100
Pembagian: 20 / 5 = 4
Modulus: 20 % 5 = 0
20 * 5 - 5 = 95
Apakah 20 == 5? 0
Apakah 20 > 5? 1
Apakah 20 != 5? 1
```
Kamu sudah menguasai operator aritmatika dan relasional dengan baik. Sekarang kita akan masuk ke **Kontrol Alur Program**, yaitu cara membuat program mengambil keputusan atau mengulang sesuatu berdasarkan kondisi.

---

### Kontrol Alur Program
Di C, kita bisa mengontrol alur program dengan:
1. **Percabangan** (`if`, `else if`, `else`): Untuk membuat keputusan.
2. **Perulangan** (`for`, `while`, `do-while`): Untuk mengulang kode.

#### Percabangan dengan `if`
Sintaks dasar:
```c
if (kondisi) {
    // Kode dijalankan jika kondisi benar
} else {
    // Kode dijalankan jika kondisi salah
}
```

#### Program Contoh
Coba kode ini:

```c
#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    if (angka > 0) {
        printf("%d adalah angka positif.\n", angka);
    } else if (angka < 0) {
        printf("%d adalah angka negatif.\n", angka);
    } else {
        printf("Angka adalah nol.\n");
    }

    return 0;
}
```

#### Penjelasan:
- Program meminta input angka.
- `if (angka > 0)`: Mengecek apakah angka positif.
- `else if (angka < 0)`: Mengecek apakah angka negatif.
- `else`: Menangani kasus angka nol.

#### Tugas Kelima:
1. Salin dan jalankan kode di atas. Coba masukkan angka positif (misalnya `5`), negatif (misalnya `-3`), dan `0`.
2. Modifikasi program:
   - Tambahkan pengecekan apakah angka genap atau ganjil menggunakan operator modulus (`%`). (Petunjuk: Jika `angka % 2 == 0`, maka genap).
   - Cetak hasilnya, misalnya "5 adalah ganjil" atau "4 adalah genap".
3. Eksperimen dengan beberapa angka dan lihat hasilnya.

Setelah selesai, laporkan hasilnya atau tanyakan kalau ada yang kurang jelas. Kita akan lanjut ke perulangan setelah ini!