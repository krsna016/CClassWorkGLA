/*
 * Write a C program to accept a coordinate point in a XY 
 * coordinate system and determine in which quadrant the 
 * coordinate point lies ?
 * Student name : Anurag pareek
 * Sec : J
 */

#include <stdio.h>
int main()
{
    float x,y;
    printf("Write the abscissa (X value) : ");
    scanf("%f", &x);
    printf("Write the ordinate (Y value) : ");
    scanf("%f", &y);
    if (x>0 && y>0)
    {
        printf("The coordinate (%.2f,%.2f) lies in the 1st quadrant.",x,y);
    }
    if (x<0 && y>0)
    {
        printf("The coordinate (%.2f,%.2f) lies in the 2nd quadrant.\n",x,y);
    }
    if (x<0 && y<0)
    {
        printf("The coordinate (%.2f,%.2f) lies in the 3rd quadrant.\n",x,y);
    }
    if (x>0 && y<0)
    {
        printf("The coordinate (%.2f,%.2f) lies in the 4th quadrant.\n",x,y);
    }
    if (x=0 && y=0)
    {
        printf("The coordinate (0,0) lies in the origin.\n");
    }
    return 0;
}