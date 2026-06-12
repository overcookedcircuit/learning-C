#include <stdio.h>

int main(){
    // Ask for input
    printf("Enter integer value: ");
    int num;
    scanf("%d", &num);

    // print time table to 10
    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
}