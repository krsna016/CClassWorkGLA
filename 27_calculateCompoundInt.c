/*
 * Write a C program to calculate the compound intrest?

 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */
 
# include <math.h>
# include <stdio.h>
int main()
{
    int P,T,R,compound_interest,power;
    printf("Enter the 'rate' of intrest : ");
    scanf("%d",&R);
    printf("Enter the 'time' value (in years) : ");
    scanf("%d",&T);
    printf("Enter the 'principal' amount : ");
    scanf("%d",&P);
    power = pow((1+R),T);
    compound_interest = (P*power)-P;
    printf("The compound intrest is : %d\n",compound_interest);
    return 0;
}