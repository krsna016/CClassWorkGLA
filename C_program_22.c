/* 
* Write a program to calculate the age of a person?
* Student name : Anurag pareek 
* Sec : J
*/
# include <stdio.h>
int main()
{
    int my_birth_year,current_year,age;
    printf("Enter the year of birth : ");
    scanf("%d",&my_birth_year);
    printf("Enter the current year : ");
    scanf("%d",&current_year);
    age = current_year-my_birth_year;
    printf("The present age of yours is : %d years old.\n",age);
    return 0;
}