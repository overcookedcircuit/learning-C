#include <stdio.h>

int main(){
    char str[100];
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};

    // Take input
    printf("Write a word: ");
    scanf("%99s", str);

    // Check entire word for vowel
    int num_v = 0;
    for (int i=0; str[i] != '\0'; i++){
        for (int j=0; vowels[j] != '\0'; j++){
            if (str[i] == vowels[j]){
                num_v++;
            }
        }
    }

    printf("vowels = %d", num_v);
}