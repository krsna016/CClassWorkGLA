/*
 * Write a program using do while loop to take, print andread the numbers
 * (positive and negative both) until -1 is encountered ?
 * Also find the sum of only positive numbers ?
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    int number;
    int sum = 0;

    do
    {
        printf("Enter a number : ");
        scanf("%d", &number);
        if (number != -1) // We wrote this condition as if in first iteration we give -1 then it will print the number but we didn't want it to be printed.
        {
            printf("The entered number is : %d\n", number);
        }
        if (number > 0)
        {
            sum += number;
        }
    } while (number != -1);
    printf("\n");
    printf("The sum of positive numbers is : %d\n", sum);
    return 0;
}
