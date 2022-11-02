/*
 * Write a C program to input any character and
 * check whether it is alphabet, digit or special character ?
 
 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    char character;
    printf("Enter any character : "); 
    scanf("%c", &character); // A 'char' must be a unique 'character'.
    if(character >= 'A' && character <= 'Z')
    {
        printf("The character '%c' is a (UpperCase) ALPHABET.\n",character);
    }
    else if(character >= 'a' && character <= 'z')
    {
        printf("The character '%c' is a (LowerCase) ALPHABET.\n",character);
    }
    else if (character >= '1' && character <= '9')
    {
        printf("The character '%c' is the NUMERICAL charcter.\n",character);
    }
    else
    {
        printf("The character '%c' is the SPECIAL ALPHABET.\n",character);
    }
    return 0;
}