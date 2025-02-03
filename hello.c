#include <stdio.h>
#include <stdbool.h> // Import this package in order to create boolean types. 

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
    // int age;

    // Getting the input from the user
    // printf("Enter an input value: ");
    // scanf("%d", &age);
    // printf("Age = %d\n", age);

    // double num;
    // char alphabet;
    // double num2;
    // char alphabet2;

    // printf("Enter a decimal input: ");
    // scanf("%lf", &num);

    // printf("Enter character input: ");
    // scanf("\n%c", &alphabet);

    // printf("The number is: %.2lf", num);
    // printf("\nThe character is: %c", alphabet);

    // Taking multiple input from the user
    // scanf("\n%lf %c", &num2, &alphabet2);

    // printf("\nThe second number is: %.2lf", num2);
    // printf("\nThe second character is: %c", alphabet2);

    // bool value1 = true;
    // bool value2 = false;
    // bool value3 = (8 < 4);

    // printf("%d ", value1);
    // printf("\n%d ", value2);
    // printf("\n%d ", value3);

    // int age;
    // age = 22;

    // printf("Enter your age: ");
    // scanf("%d", &age);

    // if (age > 120) {
    //     printf("Invalid age");
    // } else if (age < 0) {
    //     printf("Invalid age");
    // } else if (age >= 18) {
    //     printf("You are eligible to vote.");
    // } else {
    //     printf("Sorry, you are not eligible to vote.");
    // }

    char operator = '+';

    int num1 = 8;
    int num2 = 7;

    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("\n%d", result);

    // Creating a program to check whether a number is odd or even
    // int number;
    // printf("\nEnter a number: ");
    // scanf("%d", &number);
    // (number % 2 == 0) ? printf("The number is even") : printf("The number is odd");

    int number;
    printf("\nEnter a number between 1 - 7: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednenday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturdaf");
            break;
        default:
            printf("Invalid Number");
    }

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

    An operator is a symbol that handles operations
    Arithmetic Operators: +, -, *, /, %, ++, --

    The remainder operator can only be used with integers and not doubles or floats.

    In type conversion, below is the data type heirarchy
    - long double
    - double
    - float
    - long
    - int
    - short
    - char

    We have two types of type conversions
    - Implicit type conversion
    - Explicit type conversion

    There is no format specifier to print boolean variables, in order to print boolean values we make use of %d. This is because bool is represented as an integer value.
    
    false - 0
    true - 1 or all the values except 0

    true / false cannot be used in capital letters.

    Comparison operators can also be used to compare variables.

    A boolean expression checks for a particular condition and results in either true / false and based on the result, different actions can be carried out.

    Logical operators are used with boolean expressions to perform logical operations.

    && - AND (returns true if both conditions are true)
    || - OR (returns true if one condition is true)
    ! - NOT (returns the opposite bool value based on whichever value it was used on)

    Boolean expressions are very useful in decision making and loops as they are used to carry out actions based on particular conditions.

    Syntax of the ternary operator
    test_condition ? do_this_expression : do_that_expression;

    Syntax of the switch statement
    switch (variable / expression) {
        case value1:
            body of the case
            break;

        case value2:
            body of the case
            break;

        default:
            body of the default
    }

*/