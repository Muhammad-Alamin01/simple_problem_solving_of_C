#include<stdio.h>

int main()
{
    int choice;
    float temp, converted_temp;

    printf("Temperature conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
    {
        printf("Enter the Fahrenheit Temperature: ");
        scanf("%f",&temp);
        converted_temp = (temp - 32)/ 1.8;
        printf("The temperature in Celsius is: %f\n",converted_temp);

        break;

    }
    case 2:
    {
        printf("Enter the Celcius Temperature: ");
        scanf("%f",&temp);
        converted_temp = (1.8 * temp) + 32;
        printf("The temperature in Fahrenheit is: %f\n",converted_temp);

        break;

    }
    default:
        printf("Not a correct option");
    }
}
