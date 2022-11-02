/*
 * Write a C program to input electricity unit charges and calculate total
 * electricity bill according to the given condition:
 * For first 50 units Rs. 0.50/unit
 * For next 100 units Rs. 0.75/unit
 * For next 100 units Rs. 1.20/unit
 * For unit above 250 Rs. 1.50/unit
 * An additional surcharge of 20% is added to the bill ?

 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
float price_per_unit(float unit_used) // Let, unit_used = 30
{
    float sum_total = 0;
    if (unit_used <= 50)
    {
        sum_total += (0.50 * unit_used); // sum_total = 15
    }
    if (unit_used <= 150 && unit_used > 50)
    {
        sum_total += (0.75 * 100) + (0.50 * (100 - unit_used));
    }
    if (unit_used <= 250 && unit_used > 150)
    {
        sum_total += (1.20 * 100) + (0.75 * 100) + (0.50 * (200 - unit_used));
    }
    if (unit_used >= 250)
    {
        sum_total += (0.50 * 50) + (0.75 * 100) + (1.20 * 100) + (1.50 * (250 - unit_used));
    }
    sum_total += sum_total; // sum_total  = sum_total + sum_total*(20/100)
                                       // sum_total = 15 + 15*(20/100)
                                       // sum_total = 15 + 3 = 18
    return sum_total;
}
int main()
{
    float unit_value,required;
    printf("Enter the value of the total unit used for the current month : ");
    scanf("%f", &unit_value);
    required = price_per_unit(unit_value);
    printf("The total bill is : ₹ %.2f\n", required);
    return 0;
}