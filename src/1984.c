
#include <stdio.h>
#include <math.h>

int mod(long long int x, long long int denum);
int isPrime(long long int denum);
long long int lpd(long long int x);
int main() {
  long long int x = 0;
  if (scanf("%lld", &x) != 1) {
    printf("n/a");
    return 0;
  }
  if (x == 0)
    printf("n/a");
  else
    printf("%lld", lpd(x));
}

int mod(long long int x, long long int denum) {
  while (1) {
    if (x == 0) return 1;
    if (x < 0) return 0;
    x -= denum;
  }
}

int isPrime(long long denum) {
  if (denum > 1)
    for (int i = 2; i < denum / 2 + 1; i++) {
      if (mod(denum, i)) return 0;
    }
  return 1;
}

long long int lpd(long long int x) {
  if (x < 0) x *= -1;
  for (long long int denum = x; denum >= x / 2 + 1; denum--)
    if (mod(x, denum) == 1)
      if (isPrime(denum)) return denum;
}


Format!
Google
Style:
C++ online code formatter © 2014 by KrzaQ

Powered by vibe.d, the D language and clang-format
