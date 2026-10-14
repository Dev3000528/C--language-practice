#include <stdio.h>
int main() {
    int a[3][3] = {
        {2, 7, 1},
        {3, 5, 4},
        {8, 9, 6}
    };
    int rows = 3;
    int cols = 3;
    printf("Predefined array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
    int largest = a[0][0];
   for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }

    printf("\nThe largest element is: %d\n", largest);
}
/*Predefined array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

The largest element is: 9