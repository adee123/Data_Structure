#include <stdio.h>
#define ROWS 4
#define COL 4

void find_sparse_matrix(int matrix[ROWS][COL]) {
    int sparse_counter = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COL; j++) {
            if (matrix[i][j] == 0) {
                ++sparse_counter; 
            }
        }
    }
    if (sparse_counter > ((ROWS * COL)/ 2))
    printf("The given matrix is sparse\n");
    else
    printf("The given matrix is not a sparse matrix\n");
    printf("There are %d numer of zeros \n", sparse_counter);
}

int main() {
    int matrix[ROWS][COL];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COL; j++){
            matrix[i][j] = 0;
        }

    }
    find_sparse_matrix(matrix);
    return 0;
}    