// 配列 {10, 20, 30, 40, 50} の全要素を
// for ループで表示してください。
// 期待される出力：
// 10
// 20
// 30
// 40
// 50

#include <stdio.h>

int main() {
    int nums[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}