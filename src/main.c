#include <stdio.h>

double sqrt_newton(double number);

int main(void) {
    double number;

    printf("Введите число: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Квадратный корень из отрицательного числа не определен.\n");
    } else {
        double result = sqrt_newton(number);
        printf("Квадратный корень из %.5lf равен %.5lf\n", number, result);
    }
    return 0;
}

double sqrt_newton(double number) {
    double guess = number / 2.0;
    double epsilon = 0.00001;

    while ((guess * guess - number) > epsilon || (number - guess * guess) > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }

    return guess;
}