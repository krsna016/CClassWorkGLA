/*
 * Write a C program to enter P,T,R and calculate simple interest?

 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float P,T,R,simple_interest;
    printf("Enter the 'rate' of intrest : ");
    scanf("%f",&R);
    printf("Enter the 'time' value (in years) : ");
    scanf("%f",&T);
    printf("Enter the 'principal' amount : ");
    scanf("%f",&P);
    simple_interest = (R*T*P)/100;
    printf("The simple intrest is : %0.4f\n",simple_interest);
    return 0;
}