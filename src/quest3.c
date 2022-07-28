#include <stdio.h>

long long int Fib(int num);

int main() {
  int num;
  if (scanf("%d", &num)) {
    if (num <= 0) {
      printf("n/a");
      return 0;
    }
    printf("%lld", Fib(num));
  } else
    printf("n/a");
  return 0;
}

long long int Fib(int num) {
  if (num == 1 || num == 2) return 1;
  return Fib(num - 1) + Fib(num - 2);
}
