#include <stdio.h>
#include <time.h>

void multiplyMatrices(int first[][3], int second[][3], int result[][3], int size) {
    int i, j, k;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            result[i][j] = 0;
            for (k = 0; k < size; k++)
                result[i][j] += first[i][k] * second[k][j];
        }
    }
}

int main() {
    int size = 3; // Change the size of matrices if needed
    int first[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int second[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int result[3][3];
    
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    multiplyMatrices(first, second, result, size);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Time Complexity: %.6f seconds\n", cpu_time_used);
    return 0;
}

