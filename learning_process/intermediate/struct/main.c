#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct Student {
  char name[50];
  int age;
};

int main() {
  printf("Struct with pointer.\n");

  struct Student s1 = {"Fern Aerell", 20};
  struct Student *ptr = &s1;

  printf("Name: %s\n", ptr->name); // (*ptr).name
  printf("Age: %d\n", ptr->age);   // (*ptr).age

  printf("\nStruct with dynamic memory allocation.\n");

  /*
    char = 1 byte

    char name[50] = 1 byte * 50 = 50 byte
    int = 4 byte

    padding = 2 byte between char name[50] and int

    struct Student = 50 byte + 2 byte + 4 byte = 56 byte
  */

  printf("int size: %lu\n", sizeof(int));           // 4 byte
  printf("char size: %lu\n", sizeof(char));         // 1 byte
  printf("char[50] size: %lu\n", sizeof(char[50])); // 50 byte
  // Padding 2 byte
  printf("struct Student size: %lu\n", sizeof(struct Student)); // 56 byte

  struct Student *hptr = (struct Student *)malloc(sizeof(struct Student));

  if (hptr == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Input name: ");
  scanf("%s", hptr->name);
  printf("Input age: ");
  scanf("%d", &hptr->age);

  printf("Name %s, age %d \n", hptr->name, hptr->age);

  free(hptr);
  return 0;
}