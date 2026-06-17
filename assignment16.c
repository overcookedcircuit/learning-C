#include <stdio.h>

int main(){

    // Take input
    char str[100];
    printf("Write word: ");
    scanf("%s", str);

    // find length
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int palindrome = 1;

    // Check for palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    // Output it
    if (palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}