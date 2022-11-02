/*
 * Write a program where to use all the 'Logical operators'?

 * Student name : Anurag pareek
 * Sec : J 
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    // 1 ===> TRUE
    // 0 ===> FALSE
    int condition_1,condition_2,and_operator,or_operator,not_operator;
    condition_1 = 1;
    condition_2 = 0;
    and_operator = condition_1 && condition_2;
    or_operator = condition_1 || condition_2;
    not_operator = !condition_1;
    printf("\n");
    printf("The result of the 'and' operator is : %d\n",and_operator);
    printf("The result of the 'or' operator is : %d\n",or_operator);
    printf("The result of the 'not' operator is : %d\n",not_operator);
    return 0;
}