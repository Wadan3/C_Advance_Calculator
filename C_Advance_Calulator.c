#include <stdio.h>
#include <math.h>

void showMenu() {
    printf("\n====================================\n");
    printf("        Advanced C Calculator        \n");
    printf("====================================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Modulus\n");
    printf("8. Percentage\n");
    printf("9. Exit\n");
    printf("------------------------------------\n");
    printf("Choose an operation: ");
}

double getNumber(const char *message) {
    double number;
    printf("%s", message);

    while (scanf("%lf", &number) != 1) {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n');
    }

    return number;
}

int main() {
    int choice;
    double num1, num2;

    while (1) {
        showMenu();

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a valid option.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 9) {
            printf("Thank you for using Advanced C Calculator. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                num1 = getNumber("Enter first number: ");
                num2 = getNumber("Enter second number: ");
                printf("Result: %.2f\n", num1 + num2);
                break;

            case 2:
                num1 = getNumber("Enter first number: ");
                num2 = getNumber("Enter second number: ");
                printf("Result: %.2f\n", num1 - num2);
                break;

            case 3:
                num1 = getNumber("Enter first number: ");
                num2 = getNumber("Enter second number: ");
                printf("Result: %.2f\n", num1 * num2);
                break;

            case 4:
                num1 = getNumber("Enter first number: ");
                num2 = getNumber("Enter second number: ");
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %.2f\n", num1 / num2);
                }
                break;

            case 5:
                num1 = getNumber("Enter base: ");
                num2 = getNumber("Enter exponent: ");
                printf("Result: %.2f\n", pow(num1, num2));
                break;

            case 6:
                num1 = getNumber("Enter a number: ");
                if (num1 < 0) {
                    printf("Error: Cannot calculate square root of a negative number.\n");
                } else {
                    printf("Result: %.2f\n", sqrt(num1));
                }
                break;

            case 7:
                num1 = getNumber("Enter first integer: ");
                num2 = getNumber("Enter second integer: ");
                if ((int)num2 == 0) {
                    printf("Error: Modulus by zero is not allowed.\n");
                } else {
                    printf("Result: %d\n", (int)num1 % (int)num2);
                }
                break;

            case 8:
                num1 = getNumber("Enter value: ");
                num2 = getNumber("Enter percentage: ");
                printf("Result: %.2f\n", (num1 * num2) / 100);
                break;

            default:
                printf("Invalid option. Please choose between 1 and 9.\n");
        }
    }

    return 0;
}
