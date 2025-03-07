#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = &x;

    printf("Value x: %d\n", x);
    printf("Address x: %p\n", &x);

    printf("Value ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    int* nulptr = NULL;
    printf("Value nulptr: %p\n", nulptr);
    printf("Value pointed to by ptr: %d\n", *nulptr); // Error

    return 0;
}