#include <stdio.h>

int main() {
    int i;

    printf("Mencetak angka 1 sampai 5:\n");
    for(i = 10; i >= 1; --i) {
        printf("%d\n", i);
    }

    for(int x = 1; x <= 10; x++) {
        printf("5 * %d = %d\n", x, 5 * x);
    }

    return 0;
}