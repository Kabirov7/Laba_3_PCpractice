#include <printf.h>
#include <stdlib.h>

void func() {
    int arr[11];
    for (int i = 0; i < 11; i++) {
        arr[i] = rand() % (51 - 50) + 50;
    }

    long int s = 0;
    for (int i = 0; i < 11; i++)  s += arr[i];
    printf("Сумма массива: %ld", s);
}