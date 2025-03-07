#include <stdio.h>

int main() {
  int nums[5] = {20, 11, 20, 0, 5};
  printf("Array at index %d: %d\n", 0, nums[0]);
  printf("Array at index %d: %d\n", 1, nums[1]);
  printf("Array at index %d: %d\n", 2, nums[2]);
  printf("Array at index %d: %d\n", 3, nums[3]);
  printf("Array at index %d: %d\n", 4, nums[4]);

  char chars[13] = {'F', 'e', 'r', 'n'};
  printf("Array at index %d: %c\n", 0, chars[0]);
  printf("Array at index %d: %c\n", 1, chars[1]);
  printf("Array at index %d: %c\n", 2, chars[2]);
  printf("Array at index %d: %c\n", 3, chars[3]);
  return 0;
}