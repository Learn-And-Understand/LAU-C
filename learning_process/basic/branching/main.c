#include <stdio.h>
int main() {
  // If and else
  int age = 20;
  printf("Age %d, ", age);
  if (age >= 18) {
    printf("Your are an adult.\n");
  } else {
    printf("Your are still a child.\n");
  }

  int day = 0;
  printf("Day %d, ", day);
  switch (day) {
    case 0:
        printf("Sunday.\n");
        break;
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("Saturday.\n");
        break;
    default:
        printf("That's an invalid day number.\n");
        break;
  }

  return 0;
}