#include <stdio.h>
int showCubes(int *p, int size) {
    printf("\nCubes of all elements:\n");
    for (int i = 0; i < size * size; i++) {
        int value = *p; 
        printf("%d ", value * value * value); 
        p++; 
        if ((i + 1) % size == 0) {
            printf("\n");
        }
    }
}
int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);
    int a[size][size];
    printf("\nEnter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    showCubes(&a[0][0], size);
}
//Enter array's size: 2

//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5
//a[1][1] = 4

//Cubes of all elements:
//27 8
//125 64
