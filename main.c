#include <stdio.h>

float convert_to_celsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

float convert_to_fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main(void) 
{
    float fahrenheit, celsius;

    while (1) {
    int user_choice;
    char input[10];

    printf("Press 1 if you want to convert from Fahrenheit to Celsius\n");
    printf("Press 2 if you want to convert from Celsius to Fahrenheit\n");

    fgets(input, sizeof(input), stdin);

    sscanf(input, "%d", &user_choice);

    switch (user_choice) {
        case 1:
            printf("Enter the temperature in fahrenheit: ");
            scanf("%f", &fahrenheit);
            printf("The temperature in celsius is: %.2f\n", convert_to_celsius(fahrenheit));
            break;

        case 2:
            printf("Enter the temperature in celsius: ");
            scanf("%f", &celsius);
            printf("The temperature in fahrenheit is: %.2f\n", convert_to_fahrenheit(celsius));
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}
