#include <stdio.h>

int main() {
  printf("For Loop\n");
  for (int i = 0; i < 5; i++) {
    printf("Looping %d\n", i);
  }

  printf("\nWhile Loop\n");
  int i = 0;
  while (i < 5) {
    printf("Value i: %d\n", i);
    i++;
  }

  printf("\nDo While Loop\n");
  int x = 0;
  do {
    printf("Value x: %d\n", x);
    x++;
  } while (x < 5);

  return 0;
}