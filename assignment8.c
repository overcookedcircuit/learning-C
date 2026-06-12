#include <stdio.h>

int main(){
    // Ask for input
    printf("Enter integer value: ");
    int num;
    scanf("%d", &num);

    // Calculate from 1 to N
    int sum = 0;
    for (int i=0; i<=num; i++){
        sum += i;
    }

    printf("%d", sum);
}