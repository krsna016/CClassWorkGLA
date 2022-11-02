/*
 * Write a C program to find average of two numbers ?

 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */ 

# include <stdio.h>
int main()
{
    float num_1,num_2,average;
    printf("Enter the value for the number 1 : ");
    scanf("%f",&num_1);
    printf("Enter the value for the number 2 : ");
    scanf("%f",&num_2);
    average = (num_1 + num_2)/2;
    printf("The average of two numbers are : %0.2f\n",average); 
}