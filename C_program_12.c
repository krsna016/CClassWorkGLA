/*
* Write a program to enter any number and find it's square root?
* Student name : Anurag pareek 
* Sec : J
*/
# include <math.h>
# include <stdio.h>
int main()
{
    float num,required,power_num=0.5;
    printf("Enter the number to find it's power : ");
    scanf("%f",&num);
    required = pow(num,power_num); // Use the power function.
    printf("The square root of %f is : %f\n",num,required);
    return 0;
}
