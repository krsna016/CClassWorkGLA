/* Write a C program to covert days into weeks and years?
* Student name : Anurag pareek 
* Sec : J
*/
# include <stdio.h>
int main()
{
    printf("----We assume a year having 365 days----");
    printf("i.e 31+28+31+30+31+30+31+31+30+31+30+31 = 365\n");
    float days,weeks,years;
    printf("Enter the day (range from 1 to 31) : ");
    scanf("%f",&days);
    years = days/365;
    weeks = days/7;
    printf("It's %f years.\n",years);
    printf("It's %f weeks.\n",weeks);
    return 0;
}
