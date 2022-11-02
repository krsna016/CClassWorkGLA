/*
 * Write a program where to use all the 'Arithmetic operators'?

 * Student name : Anurag pareek
 * Sec : J 
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    int num_1,num_2,add,subtract,multiply,divide,modulo,increment_post,decrement_post,increment_pre,decrement_pre;
    printf("Enter the value for the number 1 : ");
    scanf("%d",&num_1);
    printf("Enter the value for the number 2 : ");
    scanf("%d",&num_2);
    add = num_1 + num_2;
    subtract = num_1 - num_2;
    multiply = num_1 * num_2;
    divide = num_1/num_2;
    modulo = num_1 % num_2;
    increment_post = num_1++;
    decrement_post = num_1--;
    increment_pre = ++num_1;
    decrement_pre = --num_1;
    printf("\n\n");
    printf("The 'addition' of the values are : %d\n",add);
    printf("The 'subtraction' of the values are : %d\n",subtract);
    printf("The 'multiplication' of the values are : %d\n",multiply);
    printf("The 'division' of the values are : %d\n",divide);
    printf("The 'modulo' of the values are : %d\n",modulo);
    printf("\n\n");
    printf("The value of number 1 = %d\n",num_1);
    printf("The 'post increment' of the values are : %d\n",increment_post);
    printf("The value of number 1 = %d\n",num_1);
    printf("The 'post decrement' of the values are : %d\n",decrement_post);
    printf("The value of number 1 = %d\n",num_1);
    printf("The 'pre increment' of the values are : %d\n",increment_pre);
    printf("The value of number 1 = %d\n",num_1);
    printf("The 'pre decrement' of the values are : %d\n",decrement_pre);
    printf("The value of number 1 = %d\n",num_1);
    return 0;
}
