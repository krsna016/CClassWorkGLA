/* 
 * Write a program to demonstrate Global and Internal(Local) variables?

 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int number = 100; // Global variable : This variable is assessible for any function as it's global declared.
int main()
{   
    printf("The number is : %d\n", number); // As 'number' is not declared yet. Hence it takes 'Global variable'
    int number = 200; // Local variable : This variable is assessible to the function it is declared.
    printf("The number is : %d\n", number); // As 'number' is declared now. So it takes 'Local variable'
    return 0;
}
