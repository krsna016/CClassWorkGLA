/*
 * Write a C program to input the cost price ,
 * selling price and maintenance price of the product,
 * and then calculate profit or loss along with profit/loss percentage ?
 
 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    float cp,sp,mp;
    float profit;
    float loss;
    printf("Enter the cost price : "); // Bought price
    scanf("%f",&cp);
    printf("Enter the selling price : "); // selling price
    scanf("%f",&sp);
    printf("Enter the maintenance price (Maintained by seller) : "); // Maintainance price should < cost price
    scanf("%f",&mp);
    printf("\n");
    if (sp > cp && cp > mp && (cp + mp) < sp)
    {
        profit = sp - (cp + mp);
        printf("The total profit earned from the product : ₹ %.2f\n",profit);
        printf("Profit %% = %.2f %%\n",(profit/cp)*100);
    }
    if (sp < cp && cp > mp && (cp + mp) > sp)
    {
        loss = (cp + mp) - sp;
        printf("The total loss earned from the product : ₹ %.2f\n",loss);
        printf("Loss %% = %.2f %%\n",(loss/sp)*100);
    }
    if (sp == cp)
    {
        printf("No gain No loss.\n");
    }
    else
    {
    printf("\n");
    }
    return 0;
}