#include <stdio.h>
int main(){
    int score = 75;
    if(score >= 90){
        printf("great\n");
    }else if(score >= 60){
        printf("pass\n");
    }else{
        printf("fail\n");
    }
    return 0;
}