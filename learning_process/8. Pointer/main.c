#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = &x; // Pointer ke alamat x
    float y = 5.5;
    float* ptr_y = &y;

    printf("Nilai x: %d\n", x);
    printf("Alamat x: %p\n", (void*)&x);
    printf("Nilai yang ditunjuk ptr: %d\n", *ptr);
    printf("Alamat yang disimpan ptr: %p\n", (void*)ptr);

    // Ubah nilai x melalui pointer
    *ptr = 20;
    printf("Nilai x setelah diubah: %d\n", x);

    printf("\nNilai y: %.1f\n", y);
    printf("Alamat y: %p\n", (void*)&y);
    printf("Nilai yang ditunjuk ptr_y: %.1f\n", *ptr_y);
    printf("Alamat yang disimpan ptr_y: %p\n", (void*)ptr_y);

    // Ubah nilai y melalui pointer
    *ptr_y = 10.5;
    printf("Nilai y setelah diubah: %.1f\n", y);

    return 0;
}