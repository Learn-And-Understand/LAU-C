Bagus sekali, Aerell! Kamu sudah berhasil menjalankan kode percabangan dan menambahkan logika untuk mengecek angka genap atau ganjil. Hasilnya sesuai dengan yang diharapkan:
```
Masukkan sebuah angka: 5
5 adalah angka positif.
5 adalah ganjil.
Masukkan sebuah angka: 4
4 adalah angka positif.
4 adalah genap.
```
Sekarang kamu sudah paham cara menggunakan `if`, `else if`, dan `else` untuk mengontrol alur program. Selanjutnya, kita akan masuk ke **Perulangan**, yang memungkinkan kita menjalankan kode berulang kali tanpa menulis ulang.

---

### Perulangan di C
Ada tiga jenis perulangan utama di C:
1. **`for`**: Digunakan saat jumlah pengulangan sudah diketahui.
2. **`while`**: Digunakan saat kondisi pengulangan lebih fleksibel.
3. **`do-while`**: Mirip `while`, tapi dijalankan minimal satu kali.

#### Contoh Perulangan dengan `for`
Sintaks:
```c
for (inisialisasi; kondisi; perubahan) {
    // Kode yang diulang
}
```

Program contoh:
```c
#include <stdio.h>

int main() {
    int i;

    printf("Mencetak angka 1 sampai 5:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

#### Penjelasan:
- `i = 1`: Inisialisasi (mulai dari 1).
- `i <= 5`: Kondisi (ulang selama `i` kurang dari atau sama dengan 5).
- `i++`: Perubahan (tambah 1 setiap pengulangan).

#### Tugas Keenam:
1. Salin dan jalankan kode di atas. Pastikan outputnya adalah:
   ```
   Mencetak angka 1 sampai 5:
   1
   2
   3
   4
   5
   ```
2. Modifikasi program:
   - Ubah agar mencetak angka dari 10 sampai 1 (mundur).
   - Tambahkan perulangan kedua untuk mencetak tabel perkalian sederhana, misalnya tabel perkalian 5 (5x1 = 5, 5x2 = 10, dst sampai 5x10 = 50).
3. Laporkan hasilnya.

Setelah ini selesai, kita akan coba `while` dan `do-while`, lalu lanjut ke topik berikutnya! Beri tahu saya kalau ada pertanyaan.