#include <stdio.h>

int main(){

    // Input for array size
    printf("What is the size of the array: ");
    int arraySize;
    scanf("%d", &arraySize);

    // Fill array with data
    float numbers[arraySize];
    for (int i=0; i<arraySize; i++){
        printf("Enter data %d in the array: ", i+1);
        scanf("%f", &numbers[i]);
    }

    // Calculate average of array data
    float total;
    for (int i=0; i<arraySize; i++){
        total += numbers[i];
    }

    // Print
    printf("Average = %.2f", total/arraySize);
    return 0;
}