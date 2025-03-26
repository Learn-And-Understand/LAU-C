#include <stdio.h>

int main() {
    // Pointer to pointer (Double pointer)
    printf("Pointer to pointer.\n");
    int x = 10;
    int* p = &x;
    int** pp = &p;
    
    printf("Value of x: %d\n", x);

    printf("Address of x: %p\n", &x);
    printf("Address of p: %p\n", &p);
    printf("Address of pp: %p\n", &pp);

    printf("Value pointed to by ptr (p): %d\n", *p);

    printf("Value pointed to by ptr-to-ptr (pp): %d\n", **pp);

    printf("Value of *pp: %p\n", *pp);

    // Pointer to array
    printf("\nPointer to array.\n");
    int nums[] = {20, 11, 2005};
    int* numPtr = nums; // 0 (20) => 0 + 1 = 1 (11) => 1 + 1 = 2 (2005)

    printf("nums[0]: %p\n", &nums[0]); // Address of value in nums index 0
    printf("numPtr: %p\n", numPtr); // Address of value in nums index 0

    printf("*numPtr: %d\n", *numPtr); // Value of nums index 0

    printf("nums[1]: %p\n", &nums[1]); // Address of value in nums index 1
    printf("numPtr + 1: %p\n", numPtr + 1); // Address of value in nums index 1

    numPtr += 1;
    printf("*numPtr: %d\n", *numPtr); // Value of nums index 1

    numPtr += 1;
    printf("*numPtr: %d\n", *numPtr); // Value of nums index 2

    // Error
    // numPtr += 1;
    // printf("*numPtr: %d\n", *numPtr); // Value of nums index 3

    // Reset
    numPtr -= 2;
    printf("*numPtr: %d\n", *numPtr); // Value of nums index 0

    printf("Iteration\n");
    for(int i = 0; i < 3; i++) {
        printf("*numPtr: %d\n", *(numPtr + i)); // Value of nums index [i]
    }

    return 0;
}