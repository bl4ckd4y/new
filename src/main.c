#include <stdio.h>

#include "func.h"
#include "func_printf.h"

int input(double* number);

int main(void) {
    hello_s21();
    first_func();
    return 0;
}

int input(double* number) {
    int flag = 0;
    printf("---> Введите число: ");
    if (scanf("%lf", number) == 1) {
        flag = 0;
        printf("\n");
    } else
        flag = 1;
    return flag;
}