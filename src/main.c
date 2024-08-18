#include <stdio.h>

int input(double* number);

double sqrt_newton(const double number);
void sqrt_function_printf(const double number);

double square(const double number);
void square_function_printf(const double number);

int main(void) {
    double number = 0;
    if (input(&number) == 0) {
        sqrt_function_printf(number);
        square_function_printf(number);
    } else {
        printf("---> Вы ввели не число,. - завершение программы.\n");
    }
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

void sqrt_function_printf(const double number) {
    if (number < 0) {
        printf("---> Квадратный корень из отрицательного числа не определен,.\n");
    } else {
        double result = sqrt_newton(number);
        printf("---> Квадратный корень из %.5lf равен %.5lf\n", number, result);
    }
}

double sqrt_newton(const double number) {
    double guess = number / 2.0;
    double epsilon = 0.00001;

    while ((guess * guess - number) > epsilon || (number - guess * guess) > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }

    return guess;
}

double square(const double number) {
    int square = number * number;
    return square;
}

void square_function_printf(const double number) {
    printf("---> Квадрат числа %.5lf равен %.5lf\n", number, square(number));
}