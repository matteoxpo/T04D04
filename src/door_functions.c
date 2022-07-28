#include <stdio.h>
#include <math.h>

long double Verz(long double x);
long double Bern(long double x);
long double Par(long double x);
int main() {
    long double step = 2*M_PI/41;
    int count = 0;
    for (long double i = -M_PI; i <= M_PI + 0.001; i+=step) {
        printf("%.7Lf |", i);
        printf(" %.7Lf |", Verz(i));
        if ( (pow(1 + 4 * pow(i, 2), 0.5) - pow(i, 2) - 1) > 0 ) {
            printf(" %.7Lf |", Bern(i));
        } else {
            printf(" - |");
        }
        if (i != 0) {
            printf(" %.7Lf", Par(i));
        } else {
            printf(" -");
        }
        printf("\n");
    }
    return 0;
}

long double Verz(long double x) {
    return 1/(1 + pow(x, 2));
}

long double Bern(long double x) {
    return pow(pow(1 + 4 * pow(x, 2), 0.5) - pow(x, 2) - 1, 0.5);
}

long double Par(long double x) {
    return 1/pow(x, 2);
}
