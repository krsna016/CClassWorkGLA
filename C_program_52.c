/*
 * Write a program in C to check whether the number is prime or not ?
 * Student name : Anurag pareek
 * Sec : J
 */
// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("Enter the number : ");
//     scanf("%d", &number);
//     if (number == 0)
//     {
//         printf("Number is neither prime nor composite.\n");
//     }
//     else if (number < 0)
//     {
//         printf("Number is not a positive number.\n");
//     }
//     else
//     {
//         for (int i = 2; i < number; i++)
//         {
//             if (number % i == 0)
//             {
//                 printf("%d is not prime\n", number);
//                 return 0; // Program terminates here if iterates this.
//             }
//             continue;
//         }
//         printf("%d is a prime number\n", number);
//     }
//     return 0; // Program terminates here if not iterates if-statement this.
// }

// ALSO:

#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    if (number == 0)
    {
        printf("Number is neither prime nor composite.\n");
    }
    else if (number < 0)
    {
        printf("Number is not a positive number.\n");
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                printf("%d is not prime\n", number);
                goto end; // Program terminates here if iterates this.
            }
            continue;
        }
        printf("%d is a prime number\n", number);
    }
    end:
    return 0; // Program terminates here if not iterates if-statement this.
}
