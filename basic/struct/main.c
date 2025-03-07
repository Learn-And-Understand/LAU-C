#include <stdio.h>

struct Student {
  char name[50];
  int age;
};

int main() {
  struct Student s1 = {"Aerell", 20};

  printf("Name: %s, age: %d\n", s1.name, s1.age);

  return 0;
}