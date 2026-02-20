#include <stdio.h>  
#include <math.h>  

void add(double a, double b) {  
    printf("Result: %.2f\n", a + b);  
}  

void subtract(double a, double b) {  
    printf("Result: %.2f\n", a - b);  
}  

void multiply(double a, double b) {  
    printf("Result: %.2f\n", a * b);  
}  

void divide(double a, double b) {  
    if (b != 0) {  
        printf("Result: %.2f\n", a / b);  
    } else {  
        printf("Error: Division by zero is not allowed.\n");  
    }  
}  

void power(double base, double exponent) {  
    printf("Result: %.2f\n", pow(base, exponent));  
}  

void squareRoot(double a) {  
    if (a >= 0) {  
        printf("Result: %.2f\n", sqrt(a));  
    } else {  
        printf("Error: Cannot take the square root of a negative number.\n");  
    }  
}  

int main() {  
    int choice;  
    double num1, num2;  

    while (1) {  
        printf("\n--- Advanced Calculator ---\n");  
        printf("1. Addition\n");  
        printf("2. Subtraction\n");  
        printf("3. Multiplication\n");  
        printf("4. Division\n");  
        printf("5. Power\n");  
        printf("6. Square Root\n");  
        printf("7. Exit\n");  
        printf("Choose an operation (1-7): ");  
        scanf("%d", &choice);  

        if (choice == 7) {  
            printf("Exiting the calculator. Goodbye!\n");  
            break;  
        }  

        if (choice >= 1 && choice <= 6) {  
            if (choice == 6) {  
                printf("Enter a number: ");  
                scanf("%lf", &num1);  
                squareRoot(num1);  
            } else {  
                printf("Enter first number: ");  
                scanf("%lf", &num1);  
                printf("Enter second number: ");  
                scanf("%lf", &num2);  
                
                switch (choice) {  
                    case 1:  
                        add(num1, num2);  
                        break;  
                    case 2:  
                        subtract(num1, num2);  
                        break;  
                    case 3:  
                        multiply(num1, num2);  
                        break;  
                    case 4:  
                        divide(num1, num2);  
                        break;  
                    case 5:  
                        power(num1, num2);  
                        break;  
                    default:  
                        printf("Invalid choice.\n");  
                }  
            }  
        } else {  
            printf("Invalid choice. Please try again.\n");  
        }  
    }  
    return 0;  
}
