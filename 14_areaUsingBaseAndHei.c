/*
 * Write a C program to enter base and height of the triangle
 * and then find it's area?
 
 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float base,height,area_triangle;
    printf("Enter the base length of the triangle : ");
    scanf("%f",&base);
    printf("Enter the height of the triangle : ");
    scanf("%f",&height);
    area_triangle = 0.5*base*height;
    printf("The area of the triangle of base %0.2f and height %0.2f \
is : %0.2f\n",base,height,area_triangle);
    return 0;
}
// Doubt : If I write 1/2 instead 0.5 my answer is not coming.