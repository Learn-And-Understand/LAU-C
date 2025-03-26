#include "stdio.h"

int tambah(int x, int y) {
    return x + y;
}

int main() {
    printf("Result 10 + 5 = %d\n", tambah(10, 5));
    printf("Result 12 + 7 = %d\n", tambah(12, 7));

    int result = tambah(20, 2005);
    printf("Result: %d\n", result);
    return 0;
}