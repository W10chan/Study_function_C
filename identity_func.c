#include <stdio.h>
#include <math.h>

double identity(double x){
    return x;
}

int main(void){
    double x = -6.0;
    double step = 0.5;
    double result;

    while( x < 6.0 + step){
        result = identity(x);
        printf("%.2f\t%.3f\n", x, result);
        x += step;
    }

        // 結果をCSVファイルに出力
    FILE *fp = fopen("output_identity.csv", "w");
    if (fp == NULL) {
        printf("ファイルを開くことができません。\n");
        return 1;
    }
           fprintf(fp, "x,identity\n"); // ヘッダ行を書き込み

    x = -6.0; // 範囲の開始値にリセット
    while (x < 6.0 + step) {
        result = identity(x);
        fprintf(fp, "%.2f,%.3f\n", x, result); // データ行を書き込み
        x += step;
    }

    fclose(fp);

    printf("結果をファイルに出力しました。\n");

    return 0;
}

