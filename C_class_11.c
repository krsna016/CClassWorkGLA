/* 
* Write a program to find the power of any number?
* Student name : Anurag pareek 
* Sec : J
*/
# include <math.h> // Import the math module.
# include <stdio.h>
int main()
{
    int num,power_num,required;
    printf("Enter the number to find it's power : ");
    scanf("%d",&num);
    printf("Enter the power(Exponent) for the number : ");
    scanf("%d",&power_num);
    required = pow(num,power_num); // Use the power function.
    printf("The %d to the power %d is : %d\n",num,power_num,required);
    return 0;
}