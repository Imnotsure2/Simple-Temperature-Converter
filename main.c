#include <stdio.h>

float convert_to_celsius(float y)
{
    return (y - 32) * 5 / 9;
}

float convert_to_fahrenheit(float x)
{
    return (x * 9 / 5) + 32;
}

int main(void) 
{
    float x, y;

    printf("Press 1 if you want to convert from fahrenheit to celsius\n");
    printf("Press 2 if you want to convert from celsius to fahrenheit\n");

    int user_choice;
    scanf("%d", &user_choice);

    switch (user_choice) {
        case 1:
            printf("Enter the temperature in fahrenheit: ");
            scanf("%f", &y);
            printf("The temperature in celsius is: %lf\n", convert_to_celsius(y));
            break;

        case 2:
            printf("Enter the temperature in celsius: ");
            scanf("%f", &x);
            printf("The temperature in fahrenheit is: %lf\n", convert_to_fahrenheit(x));
            break;
    }
}