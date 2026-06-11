#include <stdio.h>

float convert_celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

int main(){
    // Step 1: Ask the user for Celsius value
    printf("Enter the Celsius value: ");

    // Step 2: Read the Celsius value from the user
    float celsius;
    scanf("%f", &celsius);

    // Step 3: Convert the Celsius value to Fahrenheit
    float fahrenheit = convert_celsius_to_fahrenheit(celsius);

    // Step 4: Print the Fahrenheit value
    printf("The Fahrenheit value is: %.2f\n", fahrenheit);

    return 0;
}