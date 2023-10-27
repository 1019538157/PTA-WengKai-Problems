#include <stdio.h>

int main() {
    int b = 0, d = 0;
    double a = 0.0, c = 0.0;
    scanf("%lf%d", &a, &b);
    if (a <= 3) {
        c = 10.0;
    } else if (a <= 10 && a > 3) {
        a -= 3;
        c = 10.0 + a * 2.0;
    } else if (a > 10) {
        a -= 10;
        c = 24 + a * 3.0;
    }
    if (b >= 5) {
        d = b / 5 * 2;
    } else {
        d = 0;
    }
    printf("%.0lf", d + c);
    return 0;
}
