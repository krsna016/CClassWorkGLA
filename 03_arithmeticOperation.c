/*
 * Write a C program to enter two numbers and perform all arithmetic
 * operations?

 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    int num_1,num_2,add_two,sub_two,mul_two,div_two,mod_two;
    printf("Enter the first number : ");
    scanf("%d",&num_1);
    printf("Enter the second number : ");
    scanf("%d",&num_2);
    printf("\n");
    add_two = num_1 + num_2;
    sub_two = num_1 - num_2;
    mul_two = num_1 * num_2;
    div_two = num_1 / num_2;
    mod_two = num_1 % num_2;
    printf("The addition of two number is : %d\n",add_two);
    printf("The subtraction of two number is : %d\n",sub_two);
    printf("The multiplication of two number is : %d\n",mul_two);
    printf("The division of two number is : %d\n",div_two);
    printf("The modulo of two number is : %d\n",mod_two);
    return 0;
}