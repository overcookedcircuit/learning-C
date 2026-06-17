#include <stdio.h>

int main() {
    char str[100];

    // Take input
    printf("Write a word: ");
    scanf("%99s", str);

    int length = 0;

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    printf("Length = %d\n", length);

    return 0;
}