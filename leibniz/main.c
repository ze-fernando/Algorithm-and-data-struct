#include <stdio.h>

double leibniz(int n) {
    double pi = 0.0;
    for (int i = 0; i < n; i++) {
        pi += ((i % 2 == 0) ? 1 : -1) / (2.0 * i + 1);
    }
    return pi * 4;
}

int main() {
    printf("PI = %lf\n", leibniz(100000));
    return 0;
}
