/*
* Write a C program to enter temperature in celcius(•c) 
  and convert it to farenheit(f)?
* Student name : Anurag pareek 
* Sec : J
*/
# include <stdio.h>
int main()
{
    float tem_in_c,tem_in_f;
    printf("Enter the temperature in celcius(•c) :  ");
    scanf("%f",&tem_in_c);
    tem_in_f = ((tem_in_c*1.8)+32);
    printf("The temperature in farenheit(f) is : %f\n",tem_in_f);
    return 0;
}