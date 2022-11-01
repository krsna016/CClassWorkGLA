/*
 * Write a program in C to input all the side of a triangle
 * and check whether the triangle is valid or not ?
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the first side of a triangle : ");
    scanf("%d",&s1);
    printf("Enter the second side of a triangle : ");
    scanf("%d",&s2);
    printf("Enter the third side of a triangle : ");
    scanf("%d",&s3);
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)
    {
        printf("The triangle is valid!");
    }
    else
    {
        printf("The triangle is not valid!");
    }
    return 0;
}