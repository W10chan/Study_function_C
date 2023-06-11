#include <stdio.h>
#include <math.h>

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

int main(void) {
    double x = -6.0; // 範囲の開始値
    double step = 0.5; // ステップサイズ
    double result;

    // 結果をタブ区切り形式で表示
    while (x < 6.0 + step) {
        result = sigmoid(x);
        printf("%.5f\t%.16f\n", x, result);
        x += step;
    }

    // 結果をCSVファイルに出力
    FILE *fp = fopen("output_sigmoid.csv", "w");
    if (fp == NULL) {
        printf("ファイルを開くことができません。\n");
        return 1;
    }

    fprintf(fp, "x,result\n"); // ヘッダ行を書き込み

    x = -6.0; // 範囲の開始値にリセット
    while (x < 6.0 + step) {
        result = sigmoid(x);
        fprintf(fp, "%.5f,%.16f\n", x, result); // データ行を書き込み
        x += step;
    }

    fclose(fp);

    printf("結果をファイルに出力しました。\n");

    return 0;
}
