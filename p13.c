#include <stdio.h>
void findFactorial(int *num, int *result) {
    *result = 1;  // Initialize the result
    for (int i = 1; i <= *num; i++) {
        *result *= i;  // Multiply result by each number up to *num
    }
}
int main() {
    int num, factorial;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        findFactorial(&num, &factorial);
        printf("The factorial of %d is: %d\n", num, factorial);
    }
    return 0;
}
