/*
                   ,----,        ,---,
                 .'   .' \    ,`--.' |
               ,----,'    |  /    /  :
  .--.--.      |    :  .  ; :    |.' '
 /  /    '     ;    |.'  /  `----':  |
|  :  /`./     `----'/  ;      '   ' ;
|  :  ;_         /  ;  /       |   | |
 \  \    `.     ;  /  /-,      '   : ;
   `----.   \   /  /  /.`|     |   | '
  /  /`--'  / ./__;      :     '   : |
 '--'.     /   |   :    .'     ;   |.'
   `--'---'    ;   | .'        '---'

 */  

#include <stdio.h>

#include "func.h"
#include "func_printf.h"

int input(double* number);

int main(void) {
    hello_world();
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