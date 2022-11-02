/*
 * Write a program that will read two integer numbers and find the
 * multiplication of them using arithmetic plus (+) operator ?
 * Do not use multiplication operator to multiply the numbers.
 
 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    int num1, num2, multiplication;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // We know multiplication is like eg: 4*5 == 4 + 4 + 4 + 4 + 4 == 20
    multiplication = 0;
    for (int i = 1; i <= num2; i++)
    {
        multiplication += num1;
    }
    printf("%d x %d = %d\n",num1,num2,multiplication);
    return 0;
}