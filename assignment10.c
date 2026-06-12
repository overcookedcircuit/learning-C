#include <stdio.h>
#include <stdbool.h>

bool isDividable(int num, int divider){
    if (num % divider == 0){
        return true;
    } else {
        return false;
    }
}

int main(){

    // Take user input
    printf("Enter integer value: ");
    int num;
    scanf("%d", &num);

    // Go from 1 to n
    for (int i=1; i<=num; i++){
        if (isDividable(i, 3) && !isDividable(i, 5)){
            printf("Fizz\n");
        } else if (isDividable(i, 5) && !isDividable(i, 3)){
            printf("Buzz\n");
        } else if (isDividable(i, 3) && isDividable(i, 5)){
            printf("FizzBuzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}