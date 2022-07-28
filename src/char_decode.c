#include <stdio.h>

void decoding();
void coding();

int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("n/a");
    return 0;
  }
  if (*argv[1] == '0') {
    coding();
    return 0;
  }
  if (*argv[1] == '1') {
    decoding();
    return 0;
  }
  printf("n/a");
  return 0;
}

void coding() {
  char c = 1;
  char n = 0;
  while (1) {
    if (scanf("%c%c", &c, &n) != 2 || (n != ' ' && n != '\n')) {
      printf("n/a");
      break;
    }
    if (n == ' ') {
      printf("%X ", c);
    } else {
      printf("%X", c);
      break;
    }
  }
}

void decoding() {
  int hex;
  char n;
  while (1) {
    if ((scanf("%X%c", &hex, &n) != 2) || (n != ' ' && n != '\n') ||
        (hex < 0x21 && hex > 0x7E)) {
      printf("n/a");
      break;
    }
    if (n == ' ') {
      printf("%c ", hex);
    } else {
      printf("%c", hex);
      break;
    }
  }
}
