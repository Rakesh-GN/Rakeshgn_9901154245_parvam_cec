#include <stdio.h>
int findMax(int *a, int *b) {
    return (*a > *b) ? *a : *b;  
}
int main() {
    int num1, num2, max;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    max = findMax(&num1, &num2);
    printf("The maximum of %d and %d is: %d\n", num1, num2, max);
    return 0;
}
