#include <stdio.h>

int main (){
    puts("Enter a number");

    int num1, num2, num3;
    printf("N1:"); scanf("%d", &num1);
    printf("N2:"); scanf("%d", &num2);
    printf("N3:"); scanf("%d", &num3);
    printf("%d+%d+%d=%d\n", num1, num2, num3, num1 + num2 + num3);
    return 0;
}