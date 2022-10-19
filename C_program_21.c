/*
* Write a program in C to find the size of data-types in C ?
* Student name : Anurag pareek 
* Sec : J
*/
# include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("The size of the 'int' datatype is : %lu bytes.\n",sizeof(a));
    printf("The size of the 'float' datatype is : %lu bytes.\n",sizeof(b));
    printf("The size of the 'double' datatype is : %lu bytes.\n",sizeof(c));
    printf("The size of the 'char' datatype is : %lu bytes.\n",sizeof(d));
}