/*
 * Write a C program to find the eligibility of admission for a
 * professional course based on the following criteria:
 * Marks in Maths >=65
 * Marks in Phy >=55
 * Marks in Chem>=50
 * Total in all three subject >=180
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    float math,phy,chem;
    printf("Enter the number of marks in Maths : ");
    scanf("%f",&math);
    printf("Enter the number of marks in Physics : ");
    scanf("%f",&phy);
    printf("Enter the number of marks in Chemistry : ");
    scanf("%f",&chem);
    if ((math + phy + chem)>180)
    {
        if (math >= 65)
        {
            if (phy >= 55)
            {
                if (chem >= 50)
                {
                    printf("Yes ,You are Eligible to take the admission as per the criteria.\n");
                }
                else
                {
                    printf("Marks in 'chemistry' is lesser than 50.\n");
                }
            }
            else
            {
                printf("Marks in 'physics' is lesser than 55.\n");
            }
        }
        else
        {
            printf("Marks in 'maths' is lesser than 65.\n");
        }
    }
    else
    {
        printf("Sorry ,Requirements are not met.\nYou are not eligible to take the admission.\n");
    }
    return 0;
}
