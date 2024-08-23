#include <stdio.h>

void temperatureconvertor(float temp, char from, char to) {
    float converted_temp;

    if (from == 'C') {
        if (to == 'F') {
            converted_temp = (temp * 9/5) + 32;  // for Celsius to Fahrenheit
        } else if (to == 'K') {
            converted_temp = temp + 273.15; // for Celsius to Kelvin
        } else {
            printf("\nInvalid scale\n");
            return;
        }
    } 
    else if (from == 'F') {
        if (to == 'C') {
            converted_temp = (temp - 32) * 5/9;  // for Fahrenheit to Celsius
        } else if (to == 'K') {
            converted_temp = (temp - 32) * 5/9 + 273.15; // for Fahrenheit to Kelvin
        } else {
            printf("\nInvalid scale\n");
            return;
        }
    } 
    else if (from == 'K') {
        if (to == 'C') {
            converted_temp = temp - 273.15; // for Kelvin to Celsius
        } else if (to == 'F') {
            converted_temp = (temp - 273.15) * 9/5 + 32; // for Kelvin to Fahrenheit
        } else {
            printf("\nInvalid scale\n");
            return;
        }
    } 
    else {
        printf("Invalid temperature scale.\n");
        return;
    }

    printf("Converted temperature: %.2f %c\n", converted_temp, to);
}

int main() {
    float temp;
    char from, to;

    printf("\nEnter temperature: "); 
    scanf("%f %c", &temp, &from);

    printf("\nConvert to (C, F, K): ");
    scanf(" %c", &to);  // Add a space before %c to consume any leftover newline

    temperatureconvertor(temp, from, to);
    return 0;
}
