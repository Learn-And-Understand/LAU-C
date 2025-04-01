# Variabel dan Tipe Data
Di C, variabel adalah tempat untuk menyimpan data di memori. Sebelum digunakan, kamu harus mendeklarasikan tipe datanya. Berikut adalah beberapa tipe data dasar di C:

- `int`: Untuk bilangan bulat (contoh: 5, -10, 100).
- `float`: Untuk bilangan desimal (contoh: 3.14, -0.5).
- `double`: Seperti `float`, tapi presisi lebih tinggi.
- `char`: Untuk karakter tunggal (contoh: 'A', 'b', '$').

#### Cara Mendeklarasikan Variabel
Sintaks: `tipe_data nama_variabel = nilai;`

Contoh:
```c
int umur = 20;
float tinggi = 175.5;
char inisial = 'A';
```

#### Program Contoh
Coba jalankan kode ini di VS Code:

```c
#include <stdio.h>

int main() {
    int umur = 20;
    float tinggi = 175.5;
    char inisial = 'A';

    printf("Umur saya: %d tahun\n", umur);
    printf("Tinggi saya: %.1f cm\n", tinggi);
    printf("Inisial saya: %c\n", inisial);

    return 0;
}
```

#### Penjelasan:
- `%d`: Format untuk `int` (decimal).
- `%.1f`: Format untuk `float`, dengan 1 angka desimal.
- `%c`: Format untuk `char`.
- `\n`: Baris baru setelah setiap output.

#### Tugas Kedua:
1. Salin kode di atas dan jalankan di VS Code. Lihat hasilnya di terminal.
2. Modifikasi nilai variabelnya:
   - Ganti `umur` dengan umur kamu sendiri.
   - Ganti `tinggi` dengan tinggi badan kamu.
   - Ganti `inisial` dengan inisial nama kamu.
3. Tambahkan satu variabel baru, misalnya `int tanggal_lahir = [tanggal kamu];`, lalu cetak dengan `printf`.