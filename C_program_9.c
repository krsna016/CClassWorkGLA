/*
* Write a C program to enter temperature in farenheit(f) 
  and convert it to celcius(•c) ?
* Student name : Anurag pareek 
* Sec : J
*/
# include <stdio.h>
int main()
{
    float tem_in_c,tem_in_f;
    printf("Enter the temperature in farenheit(f) :  ");
    scanf("%f",&tem_in_f);
    tem_in_c = (tem_in_f-32)/1.8;
    printf("The temperature in celcius(•c) is : %f\n",tem_in_c);
    return 0;
}