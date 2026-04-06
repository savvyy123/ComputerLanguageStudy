#include <stdio.h>

int main (){
    puts("Enter a number");

    int num1, num2;
    
    printf("N1:"); scanf("%d", &num1);
    printf("N2:"); scanf("%d", &num2);
    printf("%d*%d=%d\n", num1, num2, num1 * num2);
    return 0;

}