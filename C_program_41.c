/*
* Write a program to multiply a number by 65 
* without using multiplication operator ?
* Student name : Anurag pareek
* Sec : J
*/
# include <stdio.h>
int main()
{
    int number,multiply;
    printf("Enter the number to be divide by 65 : ");
    scanf("%d",&number);
    multiply = (number << 6) + (number);
    printf("The value of '%d * 65' is : %d\n",number,multiply);
    return 0;
}