/*
 * Write a program to find the lowest marks of three students using 
 * conditional operator ?
 
 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

# include <stdio.h>
int main()
{
    int array[10],i;
    for (i=0;i<3;i++)
    {
        printf("Student %d ==> please enter your marks of each subject : \n\n",i+1);
        int sub_1,sub_2,sub_3,sub_4,sub_5,lowest_marks;
        printf("Enter the marks for subject 1 out of 100 : ");
        scanf("%d",&sub_1);
        printf("Enter the marks for subject 2 out of 100 : ");
        scanf("%d",&sub_2);
        printf("Enter the marks for subject 3 out of 100 : ");
        scanf("%d",&sub_3);
        printf("Enter the marks for subject 4 out of 100 : ");
        scanf("%d",&sub_4);
        printf("Enter the marks for subject 5 out of 100 : ");
        scanf("%d",&sub_5);
        printf("\n");
        if(sub_1<sub_2 && sub_1<sub_3 && sub_1<sub_4 && sub_1<sub_5)
        {
            array[i] = sub_1;
        }
        else if(sub_2<sub_1 && sub_2<sub_3 && sub_2<sub_4 && sub_2<sub_5)
        {
            array[i] = sub_2;
        }
        else if(sub_3<sub_1 && sub_3<sub_2 && sub_3<sub_4 && sub_3<sub_5)
        {
            array[i] = sub_3;
        }
        else if(sub_4<sub_1 && sub_4<sub_2 && sub_4<sub_3 && sub_4<sub_5)
        {
            array[i] = sub_4;
        }
        else
        {
            array[i] = sub_5;
        }
    }
    printf("The lowest marks of student1,student2,student3 resp. are : ");
    for (i=0;i<3;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}