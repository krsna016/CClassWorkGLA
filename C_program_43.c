/*
* Write a program Using switch-case to take
* user Id and password and respond accordingly ?
* Student name : Anurag pareek
* Sec : J
*/ 

# include <stdio.h>
int main()
{
    int user_id,password;
    printf("Enter your userID : ");
    scanf("%d",&user_id);
    printf("Enter your password : ");
    scanf("%d",&password);
    switch (user_id)
    {
    case 920902:
        switch (password)
        {
        case 123456:
            printf("You have entered the correct password.\n");
            printf("<<Welcome screen appeared>>\n");
            break;
        default:
            printf("Try again. You have entered the incorrect password.\n");
        }
    break;
    default:
        printf("Try again. You have entered the incorrect userId.\n");
    }
    return 0;
}

// ALSO:

# include <stdio.h>
int main()
{
    int user_id,password;
    printf("Enter your userID : ");
    scanf("%d",&user_id);
    switch (user_id)
    {
    case 920902:
        printf("Well correct, Enter your password : ");
        scanf("%d",&password);
        switch (password)
        {
        case 123456:
            
            printf("You have entered the correct password.\n");
            printf("<<Welcome screen appeared>>\n");
            break;
        default:
            printf("Try again. You have entered the incorrect password.\n");
        }
    break;
    default:
        printf("Try again. You have entered the incorrect userId.\n");
    }
    return 0;
}