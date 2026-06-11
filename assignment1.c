#include <stdio.h>

// Function to calculate the sum of two integers
int calculate_sum(int num1, int num2) {
  return num1 + num2;
}

// Function to calculate the difference of two integers
int calculate_difference(int num1, int num2) {
  return num1 - num2;
}

// Function to calculate the product of two integers
int calculate_product(int num1, int num2) {
  return num1 * num2;
}

// Function to calculate the quotient of two integers
float calculate_quotient(int num1, int num2) {
  if (num2 == 0) { // Check for division by zero
    printf("Error: Division by zero is not allowed.\n");
    return 0.0;
  }
  return (float)num1 / num2;
}

int main() {
  // Step 1: Ask the user for their 1st integer value
  printf("Enter the 1st integer value: ");

  // Step 2: Read the 1st integer value from the user
  int num1;
  scanf("%d", &num1);

  // Step 3: Ask the user for their 2nd integer value
  printf("Enter the 2nd integer value: ");

  // Step 4: Read the 2nd integer value from the user
  int num2;
  scanf("%d", &num2);

  // Step 5: Print the sum of the 2 integers
  printf("The sum of %d and %d is %d\n", num1, num2, calculate_sum(num1, num2));

  // Step 6: Print the difference of the 2 integers
  printf("The difference of %d and %d is %d\n", num1, num2, calculate_difference(num1, num2));

  // Step 7: Print the product of the 2 integers
  printf("The product of %d and %d is %d\n", num1, num2, calculate_product(num1, num2));

  // Step 8: Print the quotient of the 2 integers
  printf("The quotient of %d and %d is %.2f\n", num1, num2, calculate_quotient(num1, num2));
  return 0;
}