# C Practice Assignments

These assignments are designed to help you learn C while preparing for coding assessments such as HackerRank-style tests.

Try solving each problem yourself first. After that, compare your logic, test your code with different inputs, and improve your solution.

---

## How to Run a C Program

### Compile

```bash
gcc filename.c -o filename
```

### Run

```bash
./filename
```

On Windows Command Prompt:

```bash
filename.exe
```

---

# Level 1 - Variables, Input, Output

## Assignment 1: Calculator

Write a C program that asks the user for two integers and prints:

- Sum
- Difference
- Product
- Quotient

### Example Input

```text
10
2
```

### Example Output

```text
Sum = 12
Difference = 8
Product = 20
Quotient = 5
```

---

## Assignment 2: Temperature Converter

Write a C program that converts Celsius to Fahrenheit.

### Formula

```text
F = (C * 9 / 5) + 32
```

### Example Input

```text
25
```

### Example Output

```text
Fahrenheit: 77.0
```

---

## Assignment 3: Area Calculator

Write a C program that asks the user for the length and width of a rectangle, then prints the area.

### Example Input

```text
5
10
```

### Example Output

```text
Area = 50
```

---

# Level 2 - If Statements

## Assignment 4: Positive, Negative, or Zero

Write a C program that checks whether a number is positive, negative, or zero.

### Example Input

```text
-3
```

### Example Output

```text
Negative
```

---

## Assignment 5: Even or Odd

Write a C program that checks whether an integer is even or odd.

### Hint

Use the modulo operator:

```c
%
```

### Example Input

```text
8
```

### Example Output

```text
Even
```

---

## Assignment 6: Largest of Three Numbers

Write a C program that reads three numbers and prints the largest one.

### Example Input

```text
12 45 18
```

### Example Output

```text
Largest number is 45
```

---

# Level 3 - Loops

## Assignment 7: Multiplication Table

Write a C program that prints the multiplication table of a number from 1 to 10.

### Example Input

```text
5
```

### Example Output

```text
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```

---

## Assignment 8: Sum from 1 to N

Write a C program that calculates the sum of numbers from 1 to `n`.

### Example Input

```text
10
```

### Example Output

```text
55
```

---

## Assignment 9: Factorial

Write a C program that calculates the factorial of a number.

### Example Input

```text
5
```

### Example Output

```text
120
```

---

## Assignment 10: FizzBuzz

Write a C program that prints numbers from 1 to `n`.

For each number:

- Print `FizzBuzz` if it is divisible by both 3 and 5
- Print `Fizz` if it is divisible by 3 only
- Print `Buzz` if it is divisible by 5 only
- Otherwise, print the number

### Example Input

```text
15
```

### Example Output

```text
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

---

# Level 4 - Arrays

## Assignment 11: Find Maximum

Write a C program that reads `n` numbers into an array and prints the maximum value.

### Example Input

```text
5
10 20 4 30 8
```

### Example Output

```text
Maximum = 30
```

---

## Assignment 12: Average of Array

Write a C program that reads `n` numbers into an array and prints the average.

### Example Input

```text
5
10 20 30 40 50
```

### Example Output

```text
Average = 30
```

---

## Assignment 13: Reverse Array

Write a C program that reads an array and prints it in reverse order.

### Example Input

```text
5
1 2 3 4 5
```

### Example Output

```text
5 4 3 2 1
```

---

# Level 5 - Strings

## Assignment 14: String Length

Write a C program that finds the length of a string without using `strlen()`.

### Example Input

```text
hello
```

### Example Output

```text
Length = 5
```

---

## Assignment 15: Count Vowels

Write a C program that counts how many vowels are in a string.

Vowels:

```text
a e i o u A E I O U
```

### Example Input

```text
computer
```

### Example Output

```text
Vowels = 3
```

---

## Assignment 16: Palindrome

Write a C program that checks whether a string is a palindrome.

A palindrome reads the same forward and backward.

### Example Input 1

```text
radar
```

### Example Output 1

```text
Palindrome
```

### Example Input 2

```text
hello
```

### Example Output 2

```text
Not palindrome
```

---

# Level 6 - Functions

## Assignment 17: Create Your Own Power Function

Write a function:

```c
int power(int base, int exponent)
```

The function should return `base` raised to the power of `exponent`.

### Example

```text
power(2, 3)
```

### Output

```text
8
```

---

## Assignment 18: Prime Number Function

Write a function:

```c
int isPrime(int n)
```

The function should return:

```text
1 if the number is prime
0 if the number is not prime
```

### Example Input

```text
7
```

### Example Output

```text
Prime
```

---

# Level 7 - IBM / HackerRank Style

## Assignment 19: Two Sum

Write a C program that reads an array and a target number. Find two numbers in the array whose sum equals the target.

### Example Input

```text
5
2 7 11 15 3
10
```

### Example Output

```text
7 + 3 = 10
```

---

## Assignment 20: Frequency Counter

Write a C program that counts how many times each number appears in an array.

### Example Input

```text
7
1 2 1 3 2 1 4
```

### Example Output

```text
1 appears 3 times
2 appears 2 times
3 appears 1 time
4 appears 1 time
```

---

# Recommended Practice Order for IBM Assessment

Complete these first:

1. Positive, Negative, or Zero
2. Even or Odd
3. Largest of Three Numbers
4. Multiplication Table
5. Sum from 1 to N
6. Factorial
7. FizzBuzz
8. Find Maximum
9. Reverse Array
10. Palindrome
11. Power Function
12. Prime Number Function

---

# C Syntax Cheatsheet

## Basic Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## Input

```c
int n;
scanf("%d", &n);
```

## Output

```c
printf("%d\n", n);
```

## If Statement

```c
if (n > 0) {
    printf("Positive\n");
} else {
    printf("Not positive\n");
}
```

## For Loop

```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

## Array

```c
int arr[100];

for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
```

## Function

```c
int add(int a, int b) {
    return a + b;
}
```

---

# Common Mistakes to Avoid

## Assignment Instead of Comparison

Wrong:

```c
if (x = 5)
```

Correct:

```c
if (x == 5)
```

## Array Index Out of Bounds

Wrong:

```c
for (int i = 0; i <= n; i++)
```

Correct:

```c
for (int i = 0; i < n; i++)
```

## Forgetting `&` in scanf

Wrong:

```c
scanf("%d", n);
```

Correct:

```c
scanf("%d", &n);
```

---

# Final Tip

For each assignment, practice writing:

1. The input
2. The logic
3. The output
4. Edge cases

Then send your solution for review.
