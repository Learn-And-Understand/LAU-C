# Operator di C
Operator adalah simbol yang digunakan untuk melakukan operasi pada variabel atau nilai. Ada beberapa jenis operator di C:

1. **Operator Aritmatika**
   - `+` (tambah)
   - `-` (kurang)
   - `*` (kali)
   - `/` (bagi)
   - `%` (modulus, sisa bagi)

2. **Operator Relasional**
   - `==` (sama dengan)
   - `!=` (tidak sama dengan)
   - `>` (lebih besar)
   - `<` (lebih kecil)
   - `>=` (lebih besar atau sama dengan)
   - `<=` (lebih kecil atau sama dengan)

3. **Operator Logika**
   - `&&` (dan)
   - `||` (atau)
   - `!` (tidak)

#### Program Contoh
Coba kode ini untuk melihat operator dalam aksi:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    // Aritmatika
    printf("Penjumlahan: %d + %d = %d\n", a, b, a + b);
    printf("Pengurangan: %d - %d = %d\n", a, b, a - b);
    printf("Perkalian: %d * %d = %d\n", a, b, a * b);
    printf("Pembagian: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Relasional
    printf("Apakah %d == %d? %d\n", a, b, a == b); // 1 = true, 0 = false
    printf("Apakah %d > %d? %d\n", a, b, a > b);

    return 0;
}
```

#### Penjelasan:
- `scanf("%d %d", &a, &b)`: Membaca dua angka sekaligus, dipisah spasi.
- `%`: Modulus menghitung sisa bagi (misalnya, 5 % 2 = 1).
- Relasional mengembalikan `1` (benar) atau `0` (salah).

#### Tugas Keempat:
1. Salin dan jalankan kode di atas. Coba masukkan dua angka, misalnya `10` dan `3`.
2. Tambahkan operasi baru:
   - Hitung `a * b - 5` dan cetak hasilnya.
   - Tambahkan pengecekan relasional `a != b` dan cetak hasilnya (`1` atau `0`).
3. Eksperimen dengan angka berbeda dan lihat bagaimana output berubah.