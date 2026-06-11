#include <stdio.h>

int main(){
    //Step 1: Ask the user to enter a number
    printf("Enter an integer value: ");

    //Step 2: Read the value
    int num;
    scanf("%d", &num);

    //Step 3: Compare and print
    if (num > 0){
        printf("%d is Positive", num);
    } else if (num < 0) {
        printf("%d is Negative", num);
    } else if (num == 0) {
        printf("%d is equal to zero", num);
    }

    return 0;
}