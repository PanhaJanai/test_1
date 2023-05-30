#include <stdio.h>
#include <conio.h>

float add(int num1, int mun2);
float subtract(int num1, int mun2);
float multiply(int num1, int mun2);
float divide(int num1, int mun2);

int main(){
    int num1, num2;
    char op;

    printf("Welcome to calculator.\n");

    printf("Enter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for division\nPlease enter your choice: ");

    scanf("%c", &op);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // switch for each operator
    switch(op){
        case '+':
            printf("%d + %d = %f", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%d - %d = %f", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%d * %d = %f", num1, num2, multiply(num1, num2));
            break;
        case '/':
            printf("%d / %d = %f", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Invalid operator");
    }
    
    // getch();
    return 0;
}

float add(int num1, int num2){
    return num1 + num2;
}

float subtract(int num1, int num2){
    return num1 - num2;
}

float multiply(int num1, int num2){
    return num1 * num2;
}

float divide(int num1, int num2){
    return num1 / num2;
}//