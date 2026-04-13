// 課題：配列とポインタを使って操作しよう
// 以下の3つをすべて実装してください。
// ① 配列の全要素をポインタで表示する
// 
// int nums[5] = {10, 20, 30, 40, 50}; を宣言
// ポインタ p を使って *(p+0) 〜 *(p+4) で全要素を表示する

// ② for ループ＋ポインタで全要素を表示する

// *(p+i) を使った for ループで全要素を表示する

// ③ 配列を関数に渡して表示する

// void printArray(int *arr, int size) という関数を作る
// main からその関数を呼び出す

#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *(arr + i));
    }
}

int main() {
    // ① 配列の全要素をポインタで表示する
    int nums[5] = {10, 20, 30, 40, 50};
    int *p = nums; // 配列名は配列の先頭アドレスを指す
    printf("Elements using pointer arithmetic:\n");
    printf("%d\n", *(p + 0));
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));
    printf("%d\n", *(p + 4));

    // ② for ループ＋ポインタで全要素を表示する
    printf("\nElements using for loop and pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }

    // ③ 配列を関数に渡して表示する
    printf("\nElements using function:\n");
    printArray(nums, 5);

    return 0;
}