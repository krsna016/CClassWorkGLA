/*
Write a program to multiply a number by 15 
without using multiplication or addition operator ?
Student name : Anurag pareek
Sec : J-1
*/
# include <stdio.h>
int main()
{
    int number,multiply;
    printf("Enter a number to multiply it by 15 : ");
    scanf("%d",&number);
    multiply = (number << 4) - (number); 
    printf("The value of '%d * 15' is : %d\n",number,multiply);
    return 0;
}