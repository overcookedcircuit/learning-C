#include <stdio.h>

int main(){

    /*
    // Step 1: ask the user for 3 integer values and store them
    printf("Enter 1st integer value: ");
    int num1;
    scanf("%d", &num1);

    // 2nd integer value
    printf("Enter 2nd integer value: ");
    int num2;
    scanf("%d", &num2);

    // 3rd integer value
    printf("Enter 3rd integer value: ");
    int num3;
    scanf("%d", &num3);

    // Step 2: compare for smallest and biggest
    
    
    int biggest;
    if (num1 > num2) {
        biggest = num1;
    } else if (num2 > num1) {
        biggest = num2;
    }

    if (num3 > num2) {
        biggest = num3;
    }
    */


    int numbers[3];
    // sizeof operator returns the size of a type in bytes so we do this
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i=0; i<length; i++){
        printf("Enter the value of integer %d: ", i+1);
        scanf("%d", &numbers[i]);

    }

    int biggest = numbers[0];
    // just 1 if statement
    for (int i=0; i<length; i++){
        if (numbers[i] > biggest){
            biggest = numbers[i];
        }
    }



    // Step 3: Check resutl
    printf("Biggest number is %d", biggest);
    return 0;
}