/* 
* Write a C program to calculate area of an equilateral triangle?
* Student name : Anurag pareek 
* Sec : J
*/
# include <stdio.h>
int main()
{
    float side_length,area;
    printf("Enter the side length of the equilateral triangle : ");
    scanf("%f",&side_length);
    area = (1.732/4)*side_length;
    printf("The area of the equilateral triangle are : %0.2f\n",area);
    return 0;
}