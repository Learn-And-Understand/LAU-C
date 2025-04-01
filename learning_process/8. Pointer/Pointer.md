# Pointer di C
Pointer adalah variabel yang menyimpan **alamat memori** dari variabel lain. Ini sangat kuat di C karena memungkinkan manipulasi data secara langsung.

#### Konsep Dasar
- `&`: Operator untuk mengambil alamat variabel.
- `*`: Operator untuk mendeklarasikan pointer atau mengakses nilai di alamat yang ditunjuk.

#### Program Contoh
Coba kode ini:

```c
#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = &x; // Pointer ke alamat x

    printf("Nilai x: %d\n", x);
    printf("Alamat x: %p\n", (void*)&x);
    printf("Nilai yang ditunjuk ptr: %d\n", *ptr);
    printf("Alamat yang disimpan ptr: %p\n", (void*)ptr);

    // Ubah nilai x melalui pointer
    *ptr = 20;
    printf("Nilai x setelah diubah: %d\n", x);

    return 0;
}
```

#### Penjelasan:
- `int* ptr = &x`: `ptr` menyimpan alamat `x`.
- `*ptr`: Mengakses atau mengubah nilai di alamat yang ditunjuk.
- `%p`: Format untuk mencetak alamat (tipe `void*`).

#### Tugas Kesepuluh:
1. Salin dan jalankan kode di atas. Catat outputnya (alamat akan berbeda di setiap komputer).
2. Modifikasi program:
   - Tambahkan variabel `float y = 5.5` dan pointer `float* ptr_y` yang menunjuk ke `y`.
   - Cetak nilai dan alamat `y`, lalu ubah nilai `y` melalui pointer menjadi `10.5`.