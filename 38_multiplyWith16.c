/*
 * Write a program to multiply a number by 16 without using
 * multiplication or addition operator ?
 
 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    int number,multiply;
    printf("Enter a number to multiply it by 16 : ");
    scanf("%d",&number);
    multiply = number << 4; 
/* 
As we know that the value will be multiplied 
by 2 each time as we leftshift by 1,2.. and so on.
i.e Let, number = x, so 'x * 16' will be:
x << 1 = x*2 = 2x
x << 2 = x*2*2 = 4x
x << 3 = x*2*2*2 = 8x
x << 4 = x*2*2*2*2 = 16x = required
*/
    printf("The value of '%d * 16' is : %d\n",number,multiply);
    return 0;
}
