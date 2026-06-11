#include <stdio.h>

float calculate_area(float length, float width){
    return length * width;
}

int main(){
    // Step 1: Ask the user for the length of the rectangle
    printf("Enter the length of the rectangle: ");

    // Step 2: Read the length of the rectangle from the user
    float length;
    scanf("%f", &length);

    // Step 3: Ask the user for the width of the rectangle
    printf("Enter the width of the rectangle: ");

    // Step 4: Read the value
    float width;
    scanf("%f", &width);

    // Step 5: Calculate and print
    float area = calculate_area(length, width);
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}