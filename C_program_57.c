/*
 * Write a program to print all odd numbers from m to n ?
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("---- Find all the odd number between any two number----\n");
    printf("----(The first and the last number are not included)----\n");
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    if (num1 < num2)
    {
        printf("The odd number between %d and %d are : ",num1,num2);
        for (int i = num1+1; i < num2; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Note : 'First number' should be greater than 'Second number'.\n");
    }
    return 0;
}