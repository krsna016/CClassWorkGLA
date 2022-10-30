/*
* Write a program in C to enter length and breadth and find the 
  perimeter of the rectangle?
* Student name : Anurag pareek 
* Sec : J
*/
# include <stdio.h>
int main()
{
    float length,breadth,perimeter_rec;
    printf("Enter the length of rectangle : ");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&breadth);
    perimeter_rec = 2*(length+breadth);
    printf("The perimeter of the rectangle is : %f\n",perimeter_rec);
    return 0;
}