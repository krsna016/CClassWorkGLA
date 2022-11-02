/*
 * Suppose you start writing a C program at time T1 (hh:mm:ss). 
 * At time T2 (hh:mm:ss) coding is finished. 
 * After compiling code, you get an error, and it took you T3 (hh:mm:ss)
 * time to fix the error. Write a program to find the total time (hh:mm:ss)
 * that you spent in executing this program.
 * Student name : Anurag pareek
 * Sec : J
 */
# include <time.h>
# include <stdio.h>
int main()
{
    printf("----EXECUTION STARTS----\n");
    clock_t start = clock();
    int number;
    float elapsed;
    printf("Enter your phone number : ");
    scanf("%d",&number);
    printf("Your phone number is : %d\n",number);
    clock_t end = clock();
    elapsed = (end - start)/CLOCKS_PER_SEC;
    printf("The elapsed time : %f seconds\n", elapsed);
    printf("----EXECUTION ENDS----\n");
    return 0;
}