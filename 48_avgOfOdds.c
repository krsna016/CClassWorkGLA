/*
 * Write a C program to find average of all odd numbers in the given range ?

 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    float total, total_odd_numbers = 0;
    printf("Enter the range for the odd numbers : ");
    float n;
    scanf("%f", &n);
    total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            total += i;
            total_odd_numbers++;
        }
    }
    printf("The average of all the odd numbers in the given range is : %f\n", (total / total_odd_numbers));
    return 0;
}