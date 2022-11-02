/*
 * Write a program in C to enter radius of the circle and 
 *  find it's diameter, circumference and area?

 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float radius,circumference,diameter,area,pi=3.14;
    printf("Enter the radius for the circle : ");
    scanf("%f",&radius);
    diameter = radius * 2;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    printf("The diameter of the circle is : %f\n",diameter);
    printf("The circumference of the circle is : %f\n",circumference);
    printf("The area of the circle is : %f\n",area);
    return 0;
}