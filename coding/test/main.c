#include <stdio.h>
#include <stdlib.h>

int*** init(int n);
void printArray(int*** array, int n);
void freeArray(int*** array);
void print_specific_array(int*** array, int n);



int*** init(int n) {
    int ***array = (int***)malloc(n * 4 + 1);
    if (!array) {
        return NULL;
    }

    int i = 0;
    int flag = 0;
    while (i < n) {
        array[i] = (int**)malloc(n * 4 + 1);
        if (!array[i]) {
            flag = 1;
            break;
        }
        int j = 0;
        while (j < n) {
            array[i][j] = (int*)malloc(n * 4 + 1);
            if (!array[i][j]) {
                flag = 1;
                break;
            }
            int k = 0;
            while (k < n) {
                array[i][j][k] = k + 1;
                k++;
            }
            j++;
        }
        i++;
    }
    if (flag) {
        freeArray(array);
        return NULL;
    }
    return array;
}

void printArray(int*** array, int n) {
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            int k = 0;
            while (k < n) {
                printf("%d", array[i][j][k]);
                k++;
            }
            printf(" ");
            j++;
        }
        printf("\n");
        i++;
    }
}

void freeArray(int*** array) {
    int i = 0;
    while (array[i])  {
        int j = 0;
        while (array[i][j]) {
            free(array[i][j]);
            j++;
        }
        if (array[i]) {
            free(array[i]);
        }
        i++;
    }
    if (array)
        free(array);
    return;
}

void print_specific_array(int*** array, int n) {
    printf("array[1][0][0] = %d\n", array[1][0][0]);
}


/*int main() {
    int n = 4; // Задаем размер массива
    int*** array = init(n);
    if (!array) {
        return 1;
    }

    // Вывод массива
    printArray(array, n);
    // print_specific_array(array, n);
    // Освобождение памяти
    freeArray(array);

    return 0;
}
*/