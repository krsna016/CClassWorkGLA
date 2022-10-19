/*
Write a program to interchange two values by using Bitwise operator ?
Student name : Anurag pareek
Sec : J-1
*/
# include <stdio.h>
int main()
{
    int num_1,num_2; // num_1 = 2, num_2 = 4
    printf("Enter the value for the number1 : ");
    scanf("%d",&num_1);
    printf("Enter the value for the number2 : ");
    scanf("%d",&num_2);
    printf("The value of 'num1' before swapping : %d\n",num_1);
    printf("The value of 'num2' before swapping : %d\n",num_2);
    num_1 = num_1^num_2; // num_1 = 2^4 = 010^100 = 110 = 6
    num_2 = num_1^num_2; // num_2 = 6^4 = 110^100 = 010 = 2
    num_1 = num_1^num_2; // num_1 = 6^2 = 110^010 = 100 = 4
    printf("The value of 'num1' after swapping : %d\n",num_1);
    printf("The value of 'num2' after swapping : %d\n",num_2);
    return 0;
}