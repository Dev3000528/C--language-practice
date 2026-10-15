#include <stdio.h>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulo(int a, int b);

int main() {
    int choice;
    int num1, num2;

    while (1) {
        // Displaying the menu
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n"); 
        printf("Press 0 for the exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        if (choice >= 1 && choice <= 5) {
            printf("Enter the first number: ");
            scanf("%d", &num1);
            printf("Enter the second number: ");
            scanf("%d", &num2);
        } else {
            printf("Invalid choice! Please select a valid option.\n");
            continue; 
        }
        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0) {
                    float res = divide(num1, num2);
                    if (num1 % num2 == 0) {
                        printf("Division of %d and %d is %.0f\n", num1, num2, res);
                    } else {
                        printf("Division of %d and %d is %.2f\n", num1, num2, res);
                    }
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if (num2 != 0) {
                    printf("Modulo of %d and %d is %d\n", num1, num2, modulo(num1, num2));
                } else {
                    printf("Error! Modulo by zero is not allowed.\n");
                }
                break;
        }
    }

}
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    return (float)a / b; 
}
int modulo(int a, int b) {
    return a % b;
}