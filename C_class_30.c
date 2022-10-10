/*
Write a program where to use all the 'Relational operators'?
Student name : Anurag pareek
Sec : J 
*/
# include <stdio.h>
int main()
{
    int num_1,num_2,equals,not_equals,greater,lesser,greater_equal,lesser_equal;
    printf("Enter the value for number 1 : ");
    scanf("%d",&num_1);
    printf("Enter the value for number 1 : ");
    scanf("%d",&num_2);
    if(num_1==num_2)
    {
        printf("The values are same, and ");
    }
    if(num_1 != num_2)
    {
        printf("Values are not same.\n");
    }
    if(num_1>num_2)
    {
        printf("%d is greater than %d\n",num_1,num_2);
    }
    if(num_1<num_2)
    {
        printf("%d is lesser than %d\n",num_1,num_2);
    }
    return 0;
}