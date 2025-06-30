// This file is used to check if we can produce working executables
// for i386 and x86_64 archs on Linux.
#include <stdio.h>

// A simple function to compute factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    scanf("%d", &number);
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}
