#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main() {
    int task;
    void(*Menu_Task[3])() = { endTask, Task1, Task2 };
    do {
        system("cls");
        printf("Input Task number\n");
        task = correctInputTask();
        rewind(stdin);
        Menu_Task[task]();
        printf("\nWant see another task?\n");
    } while (contCheck() != 1);
    return 0;
}