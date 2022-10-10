/*
Write a program to find the lowest marks of three students using 
conditional operator ?
Student name : Anurag pareek
Sec : J-1
*/
# include <stdio.h>
int main()
{
    int array[10],i;
    for (i=1;i<4;i++)
    {
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
        if(sub_1<sub_2 && sub_1<sub_3 && sub_1<sub_4 && sub_1<sub_5)
        {
            array[0] += sub_1;
        }
        else if(sub_2<sub_1 && sub_2<sub_3 && sub_2<sub_4 && sub_2<sub_5)
        {
            array[0] += sub_2;
        }
        else if(sub_3<sub_1 && sub_3<sub_2 && sub_3<sub_4 && sub_3<sub_5)
        {
            array[0] += sub_3;
        }
        else if(sub_4<sub_1 && sub_4<sub_2 && sub_4<sub_3 && sub_4<sub_5)
        {
            array[0] += sub_4;
        }
        else
        {
            array[0] += sub_5;
        }
    }
    return 0;
}