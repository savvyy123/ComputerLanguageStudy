// 以下の仕様でプログラムを作ってください。
//
// 1. 5人分の点数を配列に格納する
//    int scores[] = {85, 62, 91, 74, 58};
//
// 2. 全員の点数を表示する
//    例）1番：85点
//
// 3. 合計・平均を計算して表示する
//    例）合計：370点
//        平均：74点
//
// 4. 各点数を以下の基準で評価して表示する
//    80点以上 → A
//    60点以上 → B
//    60点未満 → C
//    例）1番：85点 → A

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); // UTF-8出力に設定
    int scores[] = {85, 62, 91, 74, 58};
    int total = 0;

    // 全員の点数を表示し、合計を計算
    for (int i = 0; i < 5; i++) {   
        printf("%d番：%d点\n", i + 1, scores[i]);
        total += scores[i];
    }
    printf("合計：%d点\n", total);
    printf("平均：%d点\n", total / 5);
    // 各点数を評価して表示
    for (int i = 0; i < 5; i++) {
        char grade;
        if (scores[i] >= 80) {
            grade = 'A';
        } else if (scores[i] >= 60) {
            grade = 'B';
        } else {
            grade = 'C';
        }
        printf("%d番：%d点 → %c\n", i + 1, scores[i], grade);
    }

    return 0;
}


//期待される出力：

//1番：85点
//2番：62点
//3番：91点
//4番：74点
//5番：58点
//合計：370点
//平均：74点
//1番：85点 → A
//2番：62点 → B
//3番：91点 → A
//4番：74点 → B
//5番：58点 → C