/*
Write a program to find out whether inputted number is even or odd
without using arithmetic operators ?
Student name : Anurag pareek
Sec : J-1
*/
# include <stdio.h>
int main()
{
    int number,even_odd;
    printf("Enter a number to check whether it is EVEN or ODD : ");
    scanf("%d",&number);
    even_odd = number >> 1 - ;
    printf("%d",even_odd);
    return 0;
}