/*
* Write a C program to find average of two numbers ?
* Student name : Anurag pareek 
* Sec : J
*/ 
# include <stdlib.h>
# include <stdio.h>
int main()
{
    int number,absolute_value;
    printf("Enter the number : ");
    scanf("%d",&number);
    absolute_value = abs(number);
    printf("The absolute value of the nunber %d is : %d\n"\
,number,absolute_value);
    return 0;
}