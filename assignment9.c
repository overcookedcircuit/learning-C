#include <stdio.h>

int main(){

    // Take user input
    printf("Enter an integer value: ");
    int num;
    scanf("%d", &num);

    // Calculate
    int factorial = 1;
    for (int i=1; i<=num; i++){
        factorial *= i;
    }

    // Print
    printf("%d", factorial);
    return 0;
}