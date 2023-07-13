#include <stdio.h>
int main() {
    char operators;
    printf("Enter an operator : ");
    scanf("%c", &operators);
    switch (operators) {
        case '+':
            printf("The operator is an addition operator\n");
            break;
        case '-':
            printf("The operator is a subtraction operator\n");
            break;
        case '*':
            printf("The operator is a multiplication operator\n");
            break;
        case '/':
            printf("The operator is a division operator\n");
            break;
        case '%':
            printf("The operator is a modulus operator\n");
            break;
        case '==':
            printf("The operator is an equality operator\n");
            break;
        case '!=':
            printf("The operator is an inequality operator\n");
            break;
        case '>':
            printf("The operator is a greater than operator\n");
            break;
        case '<':
            printf("The operator is a less than operator\n");
            break;
        case '>=':
            printf("The operator is a greater than or equal to operator\n");
            break;
        case '<=':
            printf("The operator is a less than or equal to operator\n");
            break;
        case '&&':
            printf("The operator is a logical AND operator\n");
            break;
        case '||':
            printf("The operator is a logical OR operator\n");
            break;
        case '!':
            printf("The operator is a logical NOT operator\n");
            break;
        case '&':
            printf("The operator is a bitwise AND operator\n");
            break;
        case '|':
            printf("The operator is a bitwise OR operator\n");
            break;
        case '^':
            printf("The operator is a bitwise XOR operator\n");
            break;
        case '~':
            printf("The operator is a bitwise NOT operator\n");
            break;
        case '<<':
            printf("The operator is a left shift operator\n");
            break;
        case '>>':
            printf("The operator is a right shift operator\n");
            break;
        // Assignment Operators
        case '=':
            printf("The operator is an assignment operator\n");
            break;
        case '+=':
            printf("The operator is an addition assignment operator\n");
            break;
        case '-=':
            printf("The operator is a subtraction assignment operator\n");
            break;
        case '*=':
            printf("The operator is a multiplication assignment operator\n");
            break;
        case '/=':
            printf("The operator is a division assignment operator\n");
            break;
        case '%=':
            printf("The operator is a modulus assignment operator\n");
            break;
        case '&=':
            printf("The operator is a bitwise AND assignment operator\n");
            break;
        case '|=':
            printf("The operator is a bitwise OR assignment operator\n");
            break;
        case '^=':
            printf("The operator is a bitwise XOR assignment operator\n");
            break;
        case '<<=':
            printf("The operator is a left shift assignment operator\n");
            break;
        case '>>=':
            printf("The operator is a right shift assignment operator\n");
            break;
        default:
            printf("Not an operator");
        }
    }
