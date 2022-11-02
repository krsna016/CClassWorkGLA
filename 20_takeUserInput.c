/* 
 * Write a program to explain how to take input from the user 
 * for different data types use in C language ?
 
 * Student name : Anurag pareek 
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    int a,b; // will return integer values
    char m; // will return character values
    float d,e; // will return float value
    double f,g; // will return double value
    // For int;
    printf("Enter the value of 'a' : ");
    scanf("%d",&a);
    printf("Enter the value of 'b' : ");
    scanf("%d",&b);
    printf("The sum of two numbers, %d and %d is :%d\n\n",a,b,a+b);
    // For char;
    printf("Enter the value of 'c' : ");
    scanf(" %c",&m);
    printf("The character you inputed is : %c\n\n",m);
    // For float;
    printf("Enter the value of 'd' : ");
    scanf("%f",&d);
    printf("Enter the value of 'e' : ");
    scanf("%f",&e);
    printf("The sum of two numbers, %f and %f is :%f\n\n",d,e,d+e);
    // For double;
    printf("Enter the value of 'f' : ");
    scanf("%lf",&f);
    printf("Enter the value of 'g' : ");
    scanf("%lf",&g);
    printf("The sum of two numbers, %lf and %lf is :%lf\n",f,g,f+g);
    return 0;
}