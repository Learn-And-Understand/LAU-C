### Struktur Data Dasar: `struct`
`struct` memungkinkan kita mengelompokkan beberapa variabel dengan tipe berbeda ke dalam satu unit. Ini sangat berguna untuk merepresentasikan data seperti informasi seseorang atau objek kompleks.

#### Sintaks Dasar
```c
struct nama_struct {
    tipe_data anggota1;
    tipe_data anggota2;
    // ...
};
```

#### Program Contoh
Coba kode ini:

```c
#include <stdio.h>

struct Mahasiswa {
    char nama[20];
    int umur;
    float tinggi;
};

int main() {
    struct Mahasiswa mhs1 = {"Aerell", 20, 175.5};

    printf("Nama: %s\n", mhs1.nama);
    printf("Umur: %d tahun\n", mhs1.umur);
    printf("Tinggi: %.1f cm\n", mhs1.tinggi);

    // Modifikasi data
    mhs1.umur = 21;
    printf("\nSetelah ulang tahun:\n");
    printf("Umur baru: %d tahun\n", mhs1.umur);

    return 0;
}
```

#### Penjelasan:
- `struct Mahasiswa`: Mendefinisikan tipe data baru dengan tiga anggota (`nama`, `umur`, `tinggi`).
- `mhs1`: Variabel bertipe `struct Mahasiswa`, diisi dengan data awal.
- Akses anggota menggunakan operator `.`.

#### Tugas Kesebelas:
1. Salin dan jalankan kode di atas. Pastikan outputnya sesuai.
2. Modifikasi program:
   - Tambahkan anggota baru ke `struct Mahasiswa`, misalnya `char kelas[5]`.
   - Buat variabel kedua `mhs2` dengan data temanmu (misalnya `"Joko", 19, 160.0, "A1"`).
   - Cetak semua data `mhs2`.
   - Tambahkan input dari pengguna untuk mengisi data `mhs1` (gunakan `scanf`).