#include <stdio.h>

int main() {
    int num = 11; 
    int i,j;
    for ( i = 1; i <= 4; i++) {
        for ( j = 1; j <= i; j++) {
            printf("%d ", num);
            num++; 
        }
        printf("\n"); 
    }
}
