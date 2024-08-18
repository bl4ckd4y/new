#include <stdio.h>

int sqrt_function(int number);

int main(void) {
    int a = 1, b = 0;
    b = sqrt_function(a);
    printf("%d", b);
    return 0;
}

int sqrt_function(int number) {
    number++;
    return number;
}