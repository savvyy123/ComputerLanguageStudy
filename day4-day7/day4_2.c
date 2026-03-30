//課題 2：&& を使った条件を書こう

//`age = 20`、`member = 1` として、18歳以上かつ会員なら「入場できます」、それ以外なら「入場できません」と表示。


#include <stdio.h>
int main(){
    int age = 20;
    int member = 1;
    if (age >= 18 && member == 1){
        printf("入場できます\n");
    }else{
        printf("入場できません\n");

    }
    return 0;
}
