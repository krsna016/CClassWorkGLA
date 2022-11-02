/*
 * Write a program in C to enter length in centimeter and convert
 * it into meter and kilometer?
 
 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    float in_cm,in_m,in_km;
    printf("Enter the value for the length in cm(centimeter) : ");
    scanf("%f",&in_cm);
    in_m = in_cm/100; // as 1 cm = 1/100 m
    in_km = in_cm/100000; // as 1 cm = 1/10000 km
    printf("The length in meter(m) : %f meter.\n",in_m);
    printf("The length in kilometer(km) : %f kilo meter.\n",in_km);
    return 0;
}