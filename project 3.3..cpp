#include <stdio.h>

int main() {
    int n, last, sum;
    printf("Enter No: ");
    scanf("%d", &n);
    last = n % 10;
    while (n > 9) {
        n = n / 10;
    }
     sum = n + last;
    printf("1st & last digit sum = %d\n", sum);
}

