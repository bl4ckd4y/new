#include "func_printf.h"
#include "func.h"

#include <stdio.h>

void sqrt_function_printf(const double number) {
    if (number < 0) {
        printf("---> Квадратный корень из отрицательного числа не определен,.\n");
    } else {
        double result = sqrt_newton(number);
        printf("---> Квадратный корень из %.5lf равен %.5lf\n", number, result);
    }
}

void square_function_printf(const double number) {
    printf("---> Квадрат числа %.5lf равен %.5lf\n", number, square(number));
}