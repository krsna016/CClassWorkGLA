/*
* Write a program to find out whether inputted number is even or odd
* without using arithmetic operators ?
* Student name : Anurag pareek
* Sec : J
*/
# include <stdio.h>
int main()
{
    int number,even_odd;
    printf("Enter a number to check whether it is EVEN or ODD : ");
    scanf("%d",&number);
    even_odd = number & 1; // LOGIC: Every odd binary number have 1 at it's end i.e 5 = 101 and 101 * 001 = 001 == 1
    if (even_odd == 1)
    {
        printf("The number is a ODD number.\n");
    }
    else
    {
        printf("The number is a EVEN number.\n");
    }
    return 0;
}