/*
 * Write a C program to generate Armstrong number in the given range ?

 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <math.h>
# include <stdio.h>
void armstrong_number(int range)
{
    int rqd,temp,sum = 0;
    for (int i = 24; i < range; i++) // i = 24 (say)
    {   
        temp = i; // temp = 24
        while (i>0)
        {
            rqd = i % 10; // rqd = 4(first iteration) , 2(second iteration)
            sum = sum + (rqd*rqd*rqd); // sum = 0 + 4*4*4 + 2*2*2 = 72 != 24 ==> Not a armstrong number
            i = i / 10; // i = 2 , 0 (int division)
        }
        // if (sum == temp)
        // {
        //     printf("The number %d is an armstrong number.\n",temp);
        //     sum = 0;
        //     continue;
        // }
        // else
        // {
        //     printf("The number %d is not an armstrong number.\n",temp);
        //     sum = 0;
        //     continue;
        // }
        printf("%d\n",sum);
        sum = 0;
    }
}
int main()
{
    int range;
    printf("Enter the range for the armstrong number : ");
    scanf("%d", &range);
    armstrong_number(range);
    return 0;
}