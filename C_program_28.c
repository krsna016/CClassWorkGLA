/*
* Write a C program to calculate the cube of a number ?
* Student name : Anurag pareek 
* Sec : J
*/ 
# include <math.h>
# include <stdio.h>
int main()
{
    int number,cube_number;
    printf("Enter the number to find it's cube : ");
    scanf("%d",&number);
    cube_number = pow(number,3);
    printf("The cube of the number %d is : %d\n",number,cube_number);
    return 0;
}