//課題 3：switch 文を書こう

//`month = 3` として switch 文で月名を表示。1→`1月`、2→`2月`、3→`3月`、それ以外→`その他`

//**期待される出力：3月

#include <stdio.h>
int main(){
    int month = 3;
    switch(month){
        case 1:
            printf("1月\n");
            break;
        case 2:
            printf("2月\n");
            break;
        case 3:
            printf("3月\n");
            break;
        default:
            printf("その他\n");
    }
    return 0;
}