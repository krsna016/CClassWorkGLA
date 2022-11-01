/*
 * Write a C program to input any character and if its uppercase alphabet 
 * then convert it into lowercase alphabet and vice versa using switch case ?
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    char character;
    int expression;
    printf("Enter the character : "); 
    scanf("%c", &character); // Let,character = 'A'
    expression = 32+character;
    printf("%d\n", expression);
    return 0;
}