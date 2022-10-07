/* 
Write a program in C to swap two numbers using the third variable?
(Please provide the integer value.)
*/


# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value for 'a' : ");
    scanf("%d",&a);
    printf("Enter the value for 'b' : ");
    scanf("%d",&b);
    printf("The value of 'a' before swaping : %d\n",a);
    printf("The value of 'b' before swaping : %d\n",b);
    c = a;
    a = b;
    b = c;
    printf("The value of 'a' after swaping : %d\n",a);
    printf("The value of 'b' after swaping : %d\n",b);
    return 0;
}

// ALSO:

# include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value for 'a' : "); // a = 10
    scanf("%d",&a);
    printf("Enter the value for 'b' : "); // b = 20
    scanf("%d",&b);
    printf("The value of 'a' before swaping : %d\n",a);
    printf("The value of 'b' before swaping : %d\n",b);
    a = (a + b); // a = 30
    b = (a - b); // b = 10
    a = (a - b); // a = 20
    printf("The value of 'a' after swaping : %d\n",a);
    printf("The value of 'b' after swaping : %d\n",b);
    return 0;
}