#include <stdio.h>
#include <math.h>

double ReLU(double x) {
    if( x < 0 ){
    return 0;
    }
    else return x;
}

int main(void) {

printf("x\tRelu(x)\n");

for(double x=-6; x<=6;x+=0.5){

printf("%.2f\t%.2f\n", x, ReLU(x));

}

 // 結果をCSVファイルに出力
    FILE *fp = fopen("output_ReLU.csv", "w");
    if (fp == NULL) {
        printf("ファイルを開くことができません。\n");
        return 1;
    }

    fprintf(fp, "x,ReLU(x)\n"); // ヘッダ行を書き込み

    for(double x=-6; x<=6;x+=0.5){
        fprintf(fp, "%.2f,%.2f\n", x, ReLU(x));

}

    fclose(fp);

    printf("結果をファイルに出力しました。\n");

    return 0;
}
