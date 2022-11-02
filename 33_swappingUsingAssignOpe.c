/*
 * Write a program to interchange two values by using Assigment operator ?

 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float num_1,num_2,temp; // temp = EMPTY, num_1 = 2, num_2 = 4
    printf("Enter the value for the number1 : ");
    scanf("%f",&num_1);
    printf("Enter the value for the number2 : ");
    scanf("%f",&num_2);
    printf("The value of 'num1' before swapping : %0.1f\n",num_1);
    printf("The value of 'num2' before swapping : %0.1f\n",num_2);
    temp = num_1; // temp = 2
    num_1 = num_2; // num_1 = 4
    num_2 = temp; // num_2 = 2
    printf("The value of 'num1' after swapping : %0.1f\n",num_1);
    printf("The value of 'num2' after swapping : %0.1f\n",num_2);
    return 0;
}
