/*
Write a program to divide a number by 64 without using division operator ?
Student name : Anurag pareek
Sec : J-1
*/
# include <stdio.h>
int main()
{
    int number,divide;
    printf("Enter the number to be divide by 64 : ");
    scanf("%d",&number);
    divide = number >> 6;
/* 
As we know that the value will be divided 
by 2 each time as we rightshift by 1,2.. and so on.
i.e Let, number = x, so 'x * 16' will be:
x >> 1 = x/2
x >> 2 = x/2/2 = x/4
x >> 3 = x/2/2/2 = x/8
x >> 4 = x/2/2/2/2 = x/16
x >> 5 = x/2/2/2/2/2 = x/32
x >> 6 = x/2/2/2/2/2/2 = x/64 = required
*/
    printf("The value of '%d / 64' is : %d\n",number,divide);
    return 0;
}