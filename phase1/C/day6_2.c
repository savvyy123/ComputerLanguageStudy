// 配列 {5, 3, 8, 1, 9, 2, 7} の合計と平均を計算して表示してください。
// 期待される出力：
// 合計：35
// 平均：5

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int nums[] = {5, 3, 8, 1, 9, 2, 7};
    int total = 0;

    for (int i = 0; i < 7; i++) {
        total += nums[i];
    }

    printf("合計：%d\n", total);
    printf("平均：%d\n", total / 7);

    return 0;
}