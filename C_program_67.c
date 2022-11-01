/*
 * Write a C program to input grades and credits of 
 * five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
 * Find the SPI of student according to the university rule 
 * and print the Grade based on SPI.
 * Student name : Anurag pareek
 * Sec : J
 */
#include <stdio.h>
int main()
{
    int grade_phy,grade_che,grade_bio,grade_math,grade_comp;
    int credit_phy,credit_che,credit_bio,credit_math,credit_comp;
    float spi;
    printf("----GRADE POINT SHOULD BE OUT OF 10----\n");
    printf("  ----CREDIT SHOULD BE OUT OF 4----\n");
    printf("Enter the 'grades' for the subject - PHYSICS : ");
    scanf("%d", &grade_phy);
    printf("Enter the 'credit' for the subject - PHYSICS : ");
    scanf("%d", &credit_phy);
    printf("Enter the 'grades' for the subject - CHEMISTRY : ");
    scanf("%d", &grade_bio);
    printf("Enter the 'credit' for the subject - CHEMISTRY : ");
    scanf("%d", &credit_che);
    printf("Enter the 'grades' for the subject - BIOLOGY : ");
    scanf("%d", &grade_bio);
    printf("Enter the 'credit' for the subject - BIOLOGY : ");
    scanf("%d", &credit_bio);
    printf("Enter the 'grades' for the subject - MATHEMATICAL : ");
    scanf("%d", &grade_math);
    printf("Enter the 'credit' for the subject - MATHEMATICAL : ");
    scanf("%d", &credit_math);
    printf("Enter the 'grades' for the subject - COMPUTER : ");
    scanf("%d", &grade_comp);
    printf("Enter the 'credit' for the subject - COMPUTER : ");
    scanf("%d", &credit_comp);
    spi = ((grade_phy*credit_phy) + (grade_che * credit_che) + (grade_bio*credit_bio) +\
 (grade_math * credit_math) + (grade_comp * credit_comp))/(credit_phy+credit_che+credit_bio+\
 credit_math+credit_comp);
    spi = 
    printf("Your SPI is : %.2f\n",spi);
    return 0;
}   