#include <stdio.h>
#include "func.h"

double sqrt_newton(const double number) {
    double guess = number / 2.0;
    double epsilon = 0.00001;
    while ((guess * guess - number) > epsilon || (number - guess * guess) > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }
    return guess;
}

double square(const double number) {
    double square = number * number;
    return square;
}

void first_func(void) {
    double number = 0;
    if (input(&number) == 0) {
        printf("\033[2J");
        hello_s21();
        sqrt_function_printf(number);
        square_function_printf(number);
    } else {
        printf("---> Вы ввели не число,. - завершение программы.\n");
    }
}