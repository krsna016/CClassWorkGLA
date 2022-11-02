/*
 * Write a program to generate multiplication table from 20 to 50 ?

 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    for (int i = 20; i < 51; i++)
    {
        printf("The multiplication table of %d is : \n",i);
        for (int j = 1; j < 11; j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}