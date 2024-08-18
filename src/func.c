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

double sum(const double number) {
    double sum = number + number;
    return sum;
}
