// for ループと continue を使って、
// 1 から 10 までのうち偶数だけを表示してください。
// ヒント：i % 2 != 0 のとき continue する
// 期待される出力：
// 2
// 4
// 6
// 8
// 10

#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}