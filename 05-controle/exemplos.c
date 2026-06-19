#include <stdio.h>

int main(void) {
  for (int i = 0; i < 10; i++) {
    printf("%d - %d\n", i, i * 10);
  }

  puts("\n-----------------------------------\n");

  int i = 0;
  while (i < 10) {
    printf("%d\n", i);
    i += 2;
  }

  puts("\n-----------------------------------\n");

  do {
    printf("%d\n", i);
    i--;
  } while (i > 0);

  puts("\n-----------------------------------\n");

  for (int i = 0; i <= 20; i++) {

    if (i % 2 == 0) {
      printf("%d é par\n", i);
    } else if (i % 15 == 0) {
      printf("%d é impar e divisivel por 3 e 5\n", i);
    } else {
      printf("%d é impar\n", i);
    }
  }

  puts("\n-----------------------------------\n");

  int flag;
  for (int i = 1; i <= 20; i++) {

    flag = 0;
    flag += (i % 2) ? 0 : 1;
    flag += (i % 3) ? 0 : 2;

    switch (flag) {
    case 1:
      printf("%d é divisível por 2\n", i);
      break;
    case 2:
      printf("%d é divisível por 3\n", i);
      break;
    case 3:
      printf("%d é divisível por 2 e 3\n", i);
      break;
    default:
      printf("%d\n", i);
    }
  }

  return 0;
}
