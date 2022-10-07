/*
Write a program in C to find the area and perimeter 
of a rectangle whose length and width are input by the user?
(User can type int as well as float.)
*/


# include <stdio.h>
int main()
{
    float area,perimeter,length,width;
    printf("Enter the 'length' of the rectangle : ");
    scanf("%f",&length);
    printf("Enter the 'width' of the rectangle : ");
    scanf("%f",&width);
    area = (length*width);
    perimeter = 2*(length + width);
    printf("The area of the rectangle is : %f\n",area);
    printf("The perimeter of the rectangle is : %f\n",perimeter);
}