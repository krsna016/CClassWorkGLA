/*
* Write a program to read an age of 15 person & find out how many of them 
* fall under : 
* Still a baby- age 0 to 5
* Attending school - age 6 to 17
* Adult life- age 18 & over
* Student name : Anurag pareek
* Sec : J
*/
#include <stdio.h>
int main()
{
    int still_a_baby = 0;
    int attending_school = 0;
    int adult_life = 0;
    int age;
    for (int i = 0; i < 15; i++)
    {
        printf("Enter your age : ");
        scanf("%d", &age);
        if (age > 0 && age <= 5)
        {
            still_a_baby ++;
        }
        else if (age > 5 && age <= 17)
        {
            attending_school ++;
        }
        else if (age > 17)
        {
            adult_life ++;
        }
    }
    printf("Total number of children under 0 to 5: %d\n",still_a_baby);
    printf("Total number of children under 6 to 17: %d\n",attending_school);
    printf("Total number of peoples over 18 : %d\n",adult_life);
    return 0;
}