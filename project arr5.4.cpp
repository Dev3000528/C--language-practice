#include <stdio.h>
int main() {
    int rows = 3;
    int cols = 3;
    int a[3][3] = {
        {2, 7, 1},
        {3, 5, 4},
        {8, 9, 6}
    };
    int row_num, col_num;
    int row_sum = 0;
    int col_sum = 0;
     printf("Enter row number: ");
    scanf("%d", &row_num);
    if (row_num >= 0 && row_num < rows) {
        printf("Elements of row %d: ", row_num);
        for (int j = 0; j < cols; j++) {
            printf("%d", a[row_num][j]);
            row_sum += a[row_num][j]; 
                if (j < cols - 1) {
                printf(", ");
            }
        }
        printf("\nThe sum of a row %d: %d\n\n", row_num, row_sum);
    } else {
        printf("Invalid row number!\n\n");
    }
            printf("Enter column number: ");
    scanf("%d", &col_num);
    if (col_num >= 0 && col_num < cols) {
        printf("Elements of column %d: ", col_num);
        for (int i = 0; i < rows; i++) {
            printf("%d", a[i][col_num]);
            col_sum += a[i][col_num]
            if (i < rows - 1) {
                printf(", ");
            }
        }
        printf("\nThe sum of column %d: %d\n", col_num, col_sum);
    } else {
        
    }
}
