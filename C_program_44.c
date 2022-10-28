/*
* Write a program each about If, If-Else, If-Else If-Else and Nested If ?
* Student name : Anurag pareek
* Sec : J
*/

// IF:

# include <stdio.h>
int main()
{
    int marks;
    printf("Enter the total marks out of 100 you got ? : ");
    scanf("%d",&marks);
    if (marks>80 && marks<=100)
    {
        printf("Outstanding performance.\n");
    }    
    return 0;
}

// IF-ELSE:

# include <stdio.h>
int main()
{
    int marks;
    printf("Enter the total marks out of 100 you got ? : ");
    scanf("%d",&marks);
    if (marks>80 && marks<=100)
    {
        printf("Outstanding performance.\n");
    }    
    else
    {
        printf("You are performing weak.\n");
    }
    return 0;
}

// IF-ELSE IF-ELSE:

# include <stdio.h>
int main()
{
    int marks;
    printf("Enter the total marks out of 100 you got ? : ");
    scanf("%d",&marks);
    if (marks>80 && marks<=100)
    {
        printf("Outstanding performance.\n");
    }    
    else if (marks>40 && marks<80)
    {
        printf("Yor are a average performer.\n");
    }
    else
    {
        printf("You failed the test.\n");
    }
    return 0;
}

// Nested - IF:

# include <stdio.h>
int main()
{
    int marks;
    printf("Enter the total marks out of 100 you got ? : ");
    scanf("%d",&marks);
    if (marks>80 && marks<=100)
    {
        printf("Outstanding performance.\n");
    }    
    if (marks >60 && marks <= 100)
    {
        printf("Well Performed.\n");
    }
    return 0;
}
