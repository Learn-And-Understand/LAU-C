# Rencana Belajar C dari Nol
1. **Pengenalan Dasar**
   - Apa itu C dan mengapa penting?
   - Mengatur lingkungan pengembangan (compiler seperti GCC, IDE seperti Code::Blocks atau VS Code).
   - Struktur dasar program C ( `#include`, `main()`, dll.).

2. **Dasar-Dasar Pemrograman**
   - Variabel dan tipe data (`int`, `float`, `char`, dll.).
   - Input dan output (`printf`, `scanf`).
   - Operator (aritmatika, logika, relasional).

3. **Kontrol Alur Program**
   - Percabangan (`if`, `else`, `switch`).
   - Perulangan (`for`, `while`, `do-while`).
   - Penggunaan `break` dan `continue`.

4. **Fungsi**
   - Mendefinisikan dan memanggil fungsi.
   - Parameter dan nilai kembalian.
   - Rekursi.

5. **Array dan String**
   - Array satu dimensi dan multi-dimensi.
   - Manipulasi string (menggunakan library `<string.h>`).

6. **Pointer**
   - Konsep dasar pointer.
   - Pointer dan array.
   - Pointer ke fungsi.

7. **Struktur Data Dasar**
   - Struct (`struct`).
   - Union dan enum.

8. **Manajemen Memori**
   - Alokasi memori dinamis (`malloc`, `calloc`, `free`).
   - Penanganan pointer dan memory leak.

9. **File I/O**
   - Membaca dan menulis file (`fopen`, `fclose`, `fprintf`, dll.).
   - Penanganan error pada file.

10. **Topik Tingkat Lanjut**
    - Preprocessor directives (`#define`, `#ifdef`, dll.).
    - Bitwise operation.
    - Multi-file programming dan header file.

11. **Praktik dan Proyek**
    - Membuat program sederhana (kalkulator, manajemen data, dll.).
    - Debugging dan optimasi kode.

### Langkah Pertama: Mari Kita Mulai!
Saya akan mulai dengan dasar-dasar. Berikut adalah contoh program C pertama kamu:

```c
#include <stdio.h>

int main() {
    printf("Halo, dunia!\n");
    return 0;
}
```

#### Penjelasan:
- `#include <stdio.h>`: Mengimpor library untuk fungsi input/output seperti `printf`.
- `int main()`: Fungsi utama tempat program dimulai.
- `printf("Halo, dunia!\n")`: Mencetak teks ke layar. `\n` adalah baris baru.
- `return 0`: Menandakan program selesai dengan sukses.

#### Tugas Pertama:
1. Coba salin kode di atas ke editor (misalnya Code::Blocks atau online compiler seperti repl.it).
2. Jalankan dan lihat hasilnya.
3. Ubah teks dalam `printf` menjadi "Halo, [nama kamu]!" dan jalankan lagi.