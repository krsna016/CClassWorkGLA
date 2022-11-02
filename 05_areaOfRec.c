/*
 * Write a program in C to enter length and breadth and find the 
 * area of the rectangle?

 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float length,breadth,area_rec;
    printf("Enter the length of rectangle : ");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&breadth);
    area_rec = length*breadth;
    printf("The area of the rectangle is : %f\n",area_rec);
    return 0;
}