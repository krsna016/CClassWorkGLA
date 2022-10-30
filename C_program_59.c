/*
 * Consider a scenario where user enters numbers continuously
 * and we are supposed to find the sum of all those numbers entered
 * by the user and as the user enters a negative number we must stop him
 * from entering numbers further and print the sum. 
 * Write a C program to accomplish the task mentioned above. ?
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    int number,sum = 0;
    while (number>0)
    {
        printf("Enter a number : ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
        printf("Sum of all numbers entered by the user : %d\n",sum);
    }
    return 0;
}