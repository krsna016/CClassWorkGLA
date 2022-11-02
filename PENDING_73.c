/*
 * Write a program to calculate age of a
 * person based on his given date of birth ?
 
 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    int dob;
    int arr[8];
    int last_element;
    printf("Enter the 'Date Of Birth' in the format (DDMMYYYY) : \n");
    for (int i = 0; i < 8; i++)
    {
        arr[i] = scanf("%d", &dob);
    }
    last_element = (sizeof(arr)/sizeof(arr[0]))-1;
    for (int i = last_element-4; i < last_element; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}