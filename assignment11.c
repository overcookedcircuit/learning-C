#include <stdio.h>

int main(){

    // Input for array size
    printf("What is the size of the array: ");
    int arraySize;
    scanf("%d", &arraySize);

    // Make array of size n
    int numbers[arraySize];

    // Fill array with data
    for (int i=0; i<arraySize; i++){
        printf("Enter data %d in the array: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Find biggest value in array
    int biggest = numbers[0];
    for (int i=0; i<arraySize; i++){
        if (numbers[i] > biggest){
            biggest = numbers[i];
        }
    }

    printf("Maximum = %d", biggest);

    return 0;
}