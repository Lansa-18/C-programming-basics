#include <stdio.h>

int main() {
    printf("Hello World!\n");

    // int age = 21;
    // printf("Age: %d", age);

    // age = 31;
    // printf("\nNew age: %d\n", age);

    // int firstNumber = 33;
    // printf("First Number = %d\n", firstNumber);

    // int secondNumber = firstNumber;
    // printf("Second Number = %d\n", secondNumber);

    // int variable1, variable2 = 25;

    // double result = 4.5;
    // float standardScore = 5.0f;

    // printf("My CGPA is: %.2lf\n", result);
    // printf("The score %.2f is a first class result\n", standardScore);

    // Storing an exponential number
    // double eNum = 5.5e6;
    // printf("%lf\n", eNum);

    // char character = 'z';
    // printf("%c\n", character);
    // printf("%d\n", character);

    // Working with inputs from the user
    int age;

    // Getting the input from the user
    printf("Enter an input value: ");
    scanf("%d", &age);
    printf("Age = %d\n", age);

    double num;
    char alphabet;
    double num2;
    char alphabet2;

    printf("Enter a decimal input: ");
    scanf("%lf", &num);

    printf("Enter character input: ");
    scanf("\n%c", &alphabet);

    printf("The number is: %.2lf", num);
    printf("\nThe character is: %c", alphabet);

    // Taking multiple input from the user
    scanf("\n%lf %c", &num2, &alphabet2);

    printf("\nThe second number is: %.2lf", num2);
    printf("\nThe second character is: %c", alphabet2);


    return 0;
}

// VARIABLES
// A variable is a name given to a memory location inside our computer where we can store data.
// Variable Naming Convention: Use good descriptive variable names, follow the camelCase format
/* 
    Rules to follow when creating variale names
    - You ccannot create variable names with space in between.
    - You cannot start variable names with numbers.
    - You cannot use certain words as variable names. e.g if
*/

/*
    DATA TYPES
    A size of a variable is usually 4-bytes

    int         (4-bytes) | %d for printing
    double      (8-bytes) | %lf for printing  This takes 6 digits after the decimal point is printed.
    float       (4-bytes) | %f for printing
    char        (1-byte)  | %c for printing

    It is important to note that characters are internally stored as integers.

    sizeof      %zu for printing


*/