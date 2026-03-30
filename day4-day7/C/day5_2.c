// for ループを使って 1 から 10 までの合計を計算して表示してください。
// 期待される出力：
// 合計：55

#include <stdio.h>

int main() {

    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("summary: %d\n", sum);

    return 0;
}