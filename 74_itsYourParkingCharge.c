/*
 * Write a program to calculate the parking charges of a vehicle. 
 * Enter the type of vehicle as a character(like c for car, b for bus, etc.)
 * and number of hours then calculate the parking charge given below-
 * Truck/Bus- Rs. 20 per hour 
 * Car- 10 Rs. per hour
 * Scooter /Motorcycle- Rs 5 per hour
 
 * Student name : Anurag pareek
 * Sec : J
 * Contact : anurag020416@gmail.com
 */

#include <stdio.h>
int main()
{
    char type;
    int hours;
    printf("Enter the type of vehicle\n(C --> CAR)\n(B --> BUS/TRUCK)\n\
(S --> SCOOTY/BIKE)\nEnter the type : ");
    scanf("%c", &type);
    printf("Enter the time of parking (in hrs) : ");
    scanf("%d", &hours);
    switch (type)
    {
        case 'C':
            printf("The parking charge of your vehicle is : ₹ %d\n", 10*hours);
            break;
        case 'B':
            printf("The parking charge of your vehicle is : ₹ %d\n", 20*hours);
            break;
        case 'S':
            printf("The parking charge of your vehicle is : ₹ %d\n", 5*hours);
            break;
        default:
            printf("Invalid type\n");
            break;
    }
    return 0;
}