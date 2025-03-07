#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
    char myChar = 'F';
    int myInt = 20;
    float myFloat = 19.500000;
    double myDouble = 19.500000000000000;

    printf("Char: %c, Size (byte): %lu, Range: %d - %d\n", myChar, sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Int: %d, Size (byte): %lu, Range: %d - %d\n", myInt, sizeof(int), INT_MIN, INT_MAX);
    printf("Float: %f, Size (byte): %lu, Range: %e - %e\n", myFloat, sizeof(float), -FLT_MIN, FLT_MAX);
    printf("Double: %lf, Size (byte): %lu, Range: %e - %e\n", myDouble, sizeof(double), -DBL_MIN, DBL_MAX);

    return 0;
}