#include <stdio.h>

int main() {
    
     int i,j,sp;
     
    for (int i = 5; i >= 1; i--) {
        
        for (int sp = 1; sp < i; sp++) {
            printf("  "); 
        }
           for (int j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n"); 
    }
}
