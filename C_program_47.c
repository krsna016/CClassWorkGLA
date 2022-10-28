/*
* Write a C program to find average of all odd numbers in the given range ?
* Student name : Anurag pareek
* Sec : J
*/
#include <stdio.h>
int main()
{
    float total, total_odd_numbers = 1;
    printf("Enter the range(under it) for the odd numbers : ");
    float n;
    scanf("%f", &n);
    total = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            // printf("%d\n", i);
            // printf("%f\n", total_odd_numbers);
            total += i;
            total_odd_numbers++;
        }
    }
    printf("The average of all the odd numbers in the given range is : %f\n", (total / total_odd_numbers));
    return 0;
}