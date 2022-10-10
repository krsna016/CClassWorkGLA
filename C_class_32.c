/*
Write a program where to use all the 'Bitwise operators'?
Student name : Anurag pareek
Sec : J 
*/
# include <stdio.h>
int main()
{
    int num_1,num_2,bitwise_and,bitwise_or,bitwise_xor,bitwise_com,left_shift,right_shift;
    printf("Enter the value for the number 1 : ");
    scanf("%d",&num_1);
    printf("Enter the value for the number 2 : ");
    scanf("%d",&num_2);
    bitwise_and = num_1 & num_2;
    bitwise_or = num_1 | num_2;
    bitwise_xor = num_1 ^ num_2;
    bitwise_com = ~num_1;
    left_shift = num_1 << 2;
    right_shift = num_1 >> 2;
    printf("The value of '%d & %d' is : %d\n",num_1,num_2,bitwise_and);
    printf("The value of '%d | %d' is : %d\n",num_1,num_2,bitwise_or);
    printf("The value of '%d ^ %d' is : %d\n",num_1,num_2,bitwise_xor);
    printf("The value of '~%d' is : %d\n",num_1,bitwise_com);
    printf("The value of '%d << 2' is : %d\n",num_1,left_shift);
    printf("The value of '%d >> 2' is : %d\n",num_1,right_shift);
    return 0;    
}