/*
 * Write a C Program to find largest of two numbers using switch case ?
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    int n1, n2,expression;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    expression = (n1>n2);
    switch (expression) // (n1>n2) either give 1 or 0 i.e the boolean value.
    {
        case 0:
            printf("%d is largest than %d\n", n2, n1); // n2 > n1 if condition is False.
            break;
        case 1:
            printf("%d is largest than %d\n", n1, n2); // n1 > n2 if condition is True.
            break;
    }
    return 0;
}