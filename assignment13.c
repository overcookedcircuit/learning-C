#include <stdio.h>

int main(){
    // Input array size
    printf("What is the array size: ");
    int arraySize;
    scanf("%d", &arraySize);

    // Fill array with data
    int numbers[arraySize];
    for (int i=0; i<arraySize; i++){
        printf("Enter data %d in array: ", i+1);
        scanf("%d", &numbers[i]);
    }
        
    

    // Reverse numbers inside the array
    for (int i = 0; i < arraySize / 2; i++) {

        /* 
            5 - 1 - 0 = 4
            5 - 1 - 1 = 3
            5 - 1 - 2 = 2

            [0] <---> [4]
            [1] <---> [3]
            [2] <---> [2]
        */
        int oppositeIndex = arraySize - 1 - i;
        int temp = numbers[i];
        numbers[i] = numbers[oppositeIndex];
        numbers[oppositeIndex] = temp;
    }

    // Print
    for (int i=0; i<arraySize; i++){
        printf("%d ", numbers[i]);
    }
    return 0;
}