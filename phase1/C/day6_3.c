
// char 配列を使って自分の名前を格納し、
// 1文字ずつ表示してください。
// 期待される出力（例）：
// s
// a
// v
// v
// y

#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "savvy";

    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}