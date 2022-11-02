/*
 * Write a program to find all leap year in the given range of years ?

 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to check for the leap year : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Yes, year %d is the leap year.\n",year);
    }
    else if (year % 400 == 0)
    {
        printf("Yes, year %d is the leap year.\n",year);
    }
    else
    {
        printf("No, year %d is not the leap year.\n",year);
    }
    return 0;
}