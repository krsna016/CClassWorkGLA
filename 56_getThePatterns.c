/*
 * Write a program to print some general patterns ?

 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
// The pattern1:
void pattern1()
{
    // This function print the following pattern:
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    int k = 1;
    while (k < 6)
    {
        for (int i = 1; i < 6; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        k++;
    }
}
// The pattern2:
void pattern2()
{
    // This function print the following pattern:
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    for (int i = 1; i < 5; i++)
    {
        printf("* * * * *\n");
    }
}
// The pattern3:
void pattern3()
{
    // This function print the following pattern:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
// The pattern3:
void pattern4()
{
    // This function print the following pattern:
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
// The pattern5:
void pattern5()
{
    // This function print the following pattern:
    // *
    // * *
    // * * *
    // * * * *
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// The pattern6:
void pattern6()
{
    // This function print the following pattern:
    // A
    // A B
    // A B C
    // A B C D
    for (char i = 'A'; i <= 'D'; i++) // We can itterate through the characters in C.
    {
        for (char j = 'A'; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}
// The pattern7:
void pattern7()
{
    // This function print the following pattern:
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int n = 0;// 0,1,3,6
    for (int i = 1; i < 5; i++)// 1,2,3,4
    {
        for (int j = 1 + n; j <= i + n; j++) // 1,2-3,4-6,7-10
        {
            printf("%d ", j);
        }
        printf("\n");
        n+=1*i;// +1,+2,+3
    }
}
// main() function:
int main()
{
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    return 0;
}
