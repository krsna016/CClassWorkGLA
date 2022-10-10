// # include <stdio.h>
// int main()
// {
//     int y = 10000;
//     y = 32;
//     printf("HelloWorld!%d\n",y);
//     return 0;
// }


// # include <stdio.h>
// int main()
// {
//     short int a = 5;
//     printf("%lu\n",sizeof(a));
//     printf("%d\n",~a);
// }


# include <math.h>
# include <stdio.h>
int main()
{   
    int i,num,power_two;;
    for (i = 1;i<20;i++)
    {
        printf("Enter the number for the power of 2 : \n");
        scanf("%d",&num);
        power_two = pow(2,num);
        printf("The 2^%d = %d\n",num,power_two);
    }
    return 0;
}