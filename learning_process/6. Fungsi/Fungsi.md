Bagus sekali, Aerell! Kamu sudah berhasil menjalankan kode asli dan memodifikasinya dengan benar. Hasilnya menunjukkan bahwa kamu paham cara kerja `while` dan `do-while`. Mari kita lihat hasil modifikasimu:
```
Masukan angka positif (masukkan angka negatif untuk berhenti):
1
Kamu masukkan: 1
2
Kamu masukkan: 2
-2
Program berhenti karena kamu memasukkan angka negatif.

Tebak angka antara 1-5 (kamu punya banyak kesempatan):
1
Tebakan kamu salah!
5
Tebakan kamu salah!
3
Selamat, tebakan kamu benar!
```
Modifikasi yang kamu buat sudah tepat:
- Bagian `while` sekarang berhenti saat angka negatif dimasukkan.
- Bagian `do-while` memungkinkan tebakan berulang sampai benar.

Sekarang, kita akan masuk ke **Fungsi**, yang akan membantu kita membuat kode lebih terstruktur dan reusable.

---

### Fungsi di C
Fungsi adalah blok kode yang bisa dipanggil berulang kali. Fungsi memiliki:
- **Nama**: Untuk memanggilnya.
- **Parameter** (opsional): Data yang diterima fungsi.
- **Nilai Kembalian** (opsional): Data yang dikembalikan ke pemanggil.

#### Sintaks Dasar
```c
tipe_kembali nama_fungsi(parameter) {
    // Kode
    return nilai; // Jika ada nilai kembalian
}
```

#### Program Contoh
Coba kode ini:

```c
#include <stdio.h>

// Fungsi tanpa parameter
void sayHello() {
    printf("Halo, Aerell!\n");
}

// Fungsi dengan parameter dan nilai kembalian
int tambah(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    // Panggil fungsi sayHello
    sayHello();

    // Panggil fungsi tambah
    printf("Masukkan dua angka: ");
    scanf("%d %d", &x, &y);
    int hasil = tambah(x, y);
    printf("%d + %d = %d\n", x, y, hasil);

    return 0;
}
```

#### Penjelasan:
- `void sayHello()`: Fungsi sederhana tanpa parameter atau nilai kembalian, hanya mencetak pesan.
- `int tambah(int a, int b)`: Fungsi yang menerima dua parameter (`a` dan `b`), menjumlahkannya, dan mengembalikan hasilnya.

#### Tugas Kedelapan:
1. Salin dan jalankan kode di atas. Coba masukkan dua angka, misalnya `5` dan `3`.
2. Modifikasi program:
   - Tambahkan fungsi baru bernama `kurang` yang mengurangi dua angka (`int kurang(int a, int b)`).
   - Panggil fungsi `kurang` di `main` dan cetak hasilnya.
   - Ubah fungsi `sayHello` agar menerima parameter nama (misalnya `void sayHello(char nama[])`), lalu cetak "Halo, [nama]!".
3. Laporkan hasilnya.

Setelah ini, kita akan lanjut ke **Array dan String**. Beri tahu saya kalau ada pertanyaan!