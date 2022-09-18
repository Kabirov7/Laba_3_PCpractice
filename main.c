#include <stdio.h>
#include "load.h"

int main(void) {
    int a = 0, b = 1;

    while (b) {
        printf("Выберите библиотеку для работы в OC Linux\n");
        printf("---------------------------\n");
        printf("1 - Array\n");
        printf("2 - matrix\n");
        printf("3 - Quit\n");
        printf("---------------------------\n");
        scanf("%d", &a);
        if (a == 1)
            LoadRun("libarray.so");
        if (a == 2)
            LoadRun("libmatrix.so");
        if (a == 3)
            b = 0;
        printf("\n");
    }
    return 0;
}
/*

(base) artur@Arturs-MacBook-Pro-19 drop it % gcc -c *.c -fPIC
(base) artur@Arturs-MacBook-Pro-19 drop it % gcc -shared -o libmatrix.so load_matrix.o matrix.o
(base) artur@Arturs-MacBook-Pro-19 drop it % gcc -L. main.c -lmatrix -o main
(base) artur@Arturs-MacBook-Pro-19 drop it % cp libmatrix.so /Users/artur/
(base) artur@Arturs-MacBook-Pro-19 drop it % open main
(base) artur@Arturs-MacBook-Pro-19 drop it %
(base) artur@Arturs-MacBook-Pro-19 drop it %
(base) artur@Arturs-MacBook-Pro-19 drop it %  gcc -shared -o libarray.so load_array.o array.o
(base) artur@Arturs-MacBook-Pro-19 drop it % gcc -L. main.c -lmatrix -o main_array
(base) artur@Arturs-MacBook-Pro-19 drop it % cp libarray.so /Users/artur
(base) artur@Arturs-MacBook-Pro-19 drop it % open main
(base) artur@Arturs-MacBook-Pro-19 drop it %

 * */
