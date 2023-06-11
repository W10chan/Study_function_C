#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define n 10

double mean_squared_error(double y[], double t[]) {
    double e = 0.0;

    for (int k = 0; k < n; k++) {
        e += (y[k] - t[k]) * (y[k] - t[k]);
    }

    e *= 0.5;
    printf("%lf", e);

    return e;
}

int main(void) {
    double y[n] = {0.1, 0.05, 0.6, 0.0, 0.05, 0.1, 0.0, 0.1, 0.0, 0.0};
    double t[n] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0};

    mean_squared_error(y, t);

    return 0;
}
