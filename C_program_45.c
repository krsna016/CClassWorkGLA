/*
* Write a C program to convert given decimal number to binary number ?
* Student name : Anurag pareek
* Sec : J
*/

#include <stdio.h>
int main()
{
    int decimal_num;
    int i = 0;
    int array[64];
    printf("Enter a decimal number : ");
    // Let decimal_num = 12
    scanf("%d",&decimal_num); 
    printf("The decimal number %d in binary format is : ",decimal_num);
    if (decimal_num == 0)
    {
        printf("00000000");
    }
    // 12 > 1 , 6 > 1 ,  3 > 1 , 1 == 1 and the loop terminates as 0 < 1.
    while (decimal_num >= 1) 
    {
        // 12 % 2 = 0 , 6 % 2 = 0 , 3 % 2 = 1 , 1 % 2 = 1 and output will be 0011.
        array[i] = decimal_num%2;
        // decimal_num = 12/2 = 6 , 6/2 = 3 , 3/2 = 1 , 1/2 = 0
        decimal_num = decimal_num / 2; 
        i++;
    }
    // j = -1,-2,-3...
    for(int j = i-1;j>=0;j--) 
    {
        // array[-1], array[-2], array[-3]...
        printf("%d",array[j]); 
    }
    printf("\n");
    return 0;
}