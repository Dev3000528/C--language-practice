#include <stdio.h>
float add() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n\n", a + b);
}
float subtract() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n\n", a - b);
}
float multiply() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n\n", a * b);
}
float divide() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        printf("Result = %.2f\n\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed!\n\n");
    }
}
float modulus(){
    int a, b; 
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Result = %d\n\n", a % b);
    } else {
        printf("Error: Division by zero is not allowed!\n\n");
    }
}
int main() {
    int choice;

    while (1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                modulus();
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                return 0; 
                printf("Invalid choice! Please choose between 0 and 5.\n\n");
        }
    }
}
