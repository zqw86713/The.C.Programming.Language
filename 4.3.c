#include <stdio.h>

int main() {
    float a, b, c, t;
    scanf("%f, %f, %f", &a, &b, &c);
    if (a>b) {
        t = a;
        a = b ;
        b = t;
    }           //  after change a <= b;

    if (a > c) {
        t = a;
        a = c;
        c = t;
    }           //  after change a <= c;

    if (b>c) {
        t = b ;
        b = c;
        c = t;
    }           //  after change b < c;

    printf("%5.2f, %5.2f, %5.2f\n", a, b ,c);
    return 0;
}
