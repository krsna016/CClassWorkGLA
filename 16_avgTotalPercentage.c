/*
 * Write a program to enter marks of five subjects and find their average,
 * total and percentage?
 
 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float sub_1,sub_2,sub_3,sub_4,sub_5,total_marks,average_marks,percentage;
    printf("---- Full marks per subject is 100 ----\n");
    printf("Enter the marks for subject-1 : ");
    scanf("%f",&sub_1);
    printf("Enter the marks for subject-2 : ");
    scanf("%f",&sub_2);
    printf("Enter the marks for subject-3 : ");
    scanf("%f",&sub_3);
    printf("Enter the marks for subject-4 : ");
    scanf("%f",&sub_4);
    printf("Enter the marks for subject-5 : ");
    scanf("%f",&sub_5);
    total_marks = sub_1+sub_2+sub_3+sub_4+sub_5;
    average_marks = total_marks/5;
    percentage = (total_marks/500)*100;
    printf("\n");
    printf("The total number of 'MARKS' got : %0.1f marks.\n",total_marks);
    printf("The 'AVERAGE MARKS' got : %0.1f marks.\n",average_marks);
    printf("The total number of 'PERCENTAGE' got : %0.1f %%.\n",percentage);
}