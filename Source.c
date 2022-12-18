#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
int main() {
    setlocale(LC_ALL, "RUS");
    printf("Введите количество символов, которое вы хотите видеть на экране\n");
    int c, start = 1;
    scanf_s("%d", &c);
    for (int start = 1; start <= c / 2; start++) printf("!");
    for (int start = c / 2; start < c; start++) printf("L!");
    for (int start = c; start == c; start++) printf("+!");
    printf("\n");
}