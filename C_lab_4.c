/*
Write a program in C to find the area of a circle as well as the circumference?
(User can input a int or float.)
*/


# include <stdio.h>
int main()
{
    float area,circumference,radius,pi = 3.14;
    printf("Enter the value for the radius of the circle : ");
    scanf("%f",&radius);
    area = (pi*radius*radius);
    circumference = (2*pi*radius);
    printf("The area of the circle is : %f\n",area);
    printf("The circumference of the circle is : %f\n",circumference);
    return 0;
}