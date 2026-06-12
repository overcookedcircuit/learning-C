#include <stdio.h>

int main(){
    // Step 1: Ask user for an integer value
    printf("Write an integer value: ");

    // Step 2: read the value
    int num;
    scanf("%d", &num);

    // Step 3: determine if it's even or odd
    if (num % 2 == 0){
        printf("number %d is even", num);
    } else {
        printf("number %d is odd", num);
    }

    return 0;
}