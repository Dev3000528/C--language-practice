#include <stdio.h>
int main() {
    
    int matrix[3][3] = {
        {2, 4, 1},
        {3, 5, 4},
        {8, 2, 6}
    };
     int size = 3;
    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            printf("%d ", matrix[j][i]);
        }
        printf("\n"); 
    }
}

/*
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6