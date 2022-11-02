/*
 * Write a program in C using switch-case to print the subject in that
 * board or stream as per the given user input about the Educational-Board or
 * stream choosen by the user and then ask the user about their favourite 
 * subject and then give him the options of what carrier he/she can choose ?
 
 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    int stream,favourite_subject;
    printf("Enter your stream :\n1 -> Science\n2 -> Commerce\n3 -> Arts\n\
Enter : ");
    scanf("%d", &stream);
    printf("\n");
    switch (stream)
    {
        case 1:
            printf("The subjects in the SCIENCE stream are : \n");
            printf("Physics\nchemistry\nMathematics\nComputer\nEnglish\n");
            printf("\n");
            printf("What's your favourite subject is :\n1->Physics\n2->Chemistry\n3->Mathematics\n4->Computer\n5->English\n\
Enter : ");
            printf("\n");
            scanf("%d", &favourite_subject);
            switch (favourite_subject)
            {
                case 1:
                    printf("You can go for physics research.\n");
                    break;
                case 2:
                    printf("You can go for chemistry research.\n");
                    break;
                case 3:
                    printf("You can go for mathematics research.\n");
                    break;
                case 4:
                    printf("You can go for computer programming.\n");
                    break;
                case 5:
                    printf("You can go for English Literature works.\n");
                    break;
                default:
                    printf("Invalid Entry\n");
                    break;
            }
            break;
        case 2:
            printf("The subjects in the COMMERCE stream are : \n");
            printf("Buisness Studies\nAccountancy\nMathematics\nPhysical Education\nEnglish\n");
            printf("\n");
            printf("What's your favourite subject is :\n1->Buiness Studies\n2->Accountancy\n3->Mathematics\n4->Physical Education\n5->English\n\
Enter : ");
            scanf("%d", &favourite_subject);
            printf("\n");
            switch (favourite_subject)
            {
                case 1:
                    printf("You can go for Buiness Studies field.\n");
                    break;
                case 2:
                    printf("You can go for Accountancy field.\n");
                    break;
                case 3:
                    printf("You can go for Mathematics field.\n");
                    break;
                case 4:
                    printf("You can go for Physical Education field.\n");
                    break;
                case 5:
                    printf("You can go for English Literature works.\n");
                    break;
                default:
                    printf("Invalid Entry\n");
                    break;
            }
            break;
        case 3:
            printf("The subjects in the SCIENCE stream are : \n");
            printf("Economics\nHistory\nPolitical Science\nComputer\nHindi\n");
            printf("\n");
            printf("What's your favourite subject is :\n1->Economics\n2->History\n3->Political Science\n4->Computer\n5->Hindi\n\
Enter : ");
            printf("\n");
            scanf("%d", &favourite_subject);
            printf("\n");
            switch (favourite_subject)
            {
                case 1:
                    printf("You can go for Economic research.\n");
                    break;
                case 2:
                    printf("You can go for History research.\n");
                    break;
                case 3:
                    printf("You can go for Political Science research.\n");
                    break;
                case 4:
                    printf("You can go for computer programming.\n");
                    break;
                case 5:
                    printf("You can go for Hindi Literature works.\n");
                    break;
                default:
                    printf("Invalid Entry\n");
                    break;
            }
            break;
            default:
                printf("Invalid Entry\n");
                break;
    }
    return 0;
}