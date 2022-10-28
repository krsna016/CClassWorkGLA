/*
* Write a C program to print n terms of fibonacci series ?
* Student name : Anurag pareek
* Sec : J
*/
#include <stdio.h>
int main()
{
    long number1 = 0; 
    long number2 = 1;
    long number3, terms;
    long array[1000];
    printf("Enter the number of terms : ");
    scanf("%ld", &terms);
    array[0] = 0;
    array[1] = 1;
    number3 = number1 + number2; // number3 = 1,2,3,5,8...
    printf("The fibonacci numbers are : ");
    for (int i = 2; i < terms+2; i++)
    {
        array[i] = number3; // 1,2,3,5...
        printf("%ld ",array[i-2]);
        number1 = number2; // number1 = 1,1,2,3,5...
        number2 = number3; // number2 = 1,2,3,5,8...
        number3 = number1 + number2;
    }
    printf("\n");
    return 0;
}