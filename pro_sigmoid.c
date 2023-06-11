#include <stdio.h>
#include <math.h>

// 関数の宣言
double sigmoid(double x);

int main(void) {
    double x = -6.0; // 任意の入力値
    double step = 0.01;
    double result;

    while (x < 6.0 + step) {
        result = sigmoid(x);
        printf("%.5f\t%.16f\n", x, result);
        x += step;
    }

    return 0;
}

// シグモイド関数の定義
double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}
