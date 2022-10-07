/*
* Write a program to enter two angle and find the third angle of the 
  triangle?
* Student name : Anurag pareek 
* Sec : J
*/
# include <stdio.h>
int main()
{
    float first_ang,second_ang,third_ang;
    printf("Enter the value for the first angle : ");
    scanf("%f",&first_ang);
    printf("Enter the value for the second angle : ");
    scanf("%f",&second_ang);
    third_ang = (180 - (first_ang + second_ang));
    printf("The third angle will be : %0.2f degree.\n",third_ang);
    return 0;
}