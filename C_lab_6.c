/* 
Write a program in C to find the simple intrest based on 
a user given principal,rate and time? 
(User can input int as well as float.)
(We know, SIMPLE INTREST = (PRINCIPAL*RATE*TIME)/100)
*/


# include <stdio.h>
int main()
{
    float principal,rate,time,simple_intrest;
    printf("Enter the 'rate' of intrest : ");
    scanf("%f",&rate);
    printf("Enter the 'time' value (in years) : ");
    scanf("%f",&time);
    printf("Enter the 'principal' amount : ");
    scanf("%f",&principal);
    simple_intrest = (rate*time*principal)/100;
    printf("The simple intrest is : %f\n",simple_intrest);
    return 0;
}


