/*
 * Write a C program to find largest of three numbers using nested if-else ?
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Enter the first number : ");
    scanf("%f",&num1);
    printf("Enter the second number : ");
    scanf("%f",&num2);
    printf("Enter the third number : ");
    scanf("%f",&num3);
    if(num1>num2 && num1>num3)
    {
        printf("%.2f is largest of three numbers.\n",num1);
    }
    else if(num2>num3 && num2>num1)
    {
        printf("%.2f is largest of three numbers.\n",num2);
    }
    else
    {
        printf("%.2f is largest of three numbers.\n",num3);
    }
    return 0;
}