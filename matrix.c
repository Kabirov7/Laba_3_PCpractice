#include <printf.h>
#include <stdlib.h>

void func() {
    int arr[4][11];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 11; j++) {
            arr[i][j]= rand() % (51 - 50) + 50;
        }
    }

    long int s = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 11; j++) s += arr[i][j];
    }
    printf("Сумма матрицы: %ld", s);
}