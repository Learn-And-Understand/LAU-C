#include <stdio.h>

int main() {
    int a = 2005;
    int b = 20;
    int c = a + b;
    printf("add: %d + %d = %d\n", a, b, c);

    int d = 2025;
    int e = 20;
    int f = d + e;
    printf("sub: %d - %d = %d\n", d, e, f);

    int g = 5;
    int h = 2;
    int i = g * h;
    printf("mul: %d * %d = %d\n", g, h, i);

    int j = 6;
    int k = 2;
    int l = j / k;
    printf("div: %d / %d = %d\n", j, k, l);

    int m = 5;
    int n = 2;
    int o = m % n;
    printf("mod: %d %c %d = %d\n", m, '%', n, o);

    return 0;
}