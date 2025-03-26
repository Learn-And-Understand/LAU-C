#include <stdio.h> // printf
#include <stdlib.h> // malloc, free
#include <stddef.h> // NULL

int main() {
    int* ptr;

    printf("Size dari int: %lu\n", sizeof(int));
    printf("5 * sizeof(int): %lu\n", 5 * sizeof(int));
    ptr = (int*) malloc(5 * sizeof(int)); // size: 20

    if(ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    for(int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}