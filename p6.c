#include <stdio.h>
int sum(int n) {
    if (n == 1) 
        return 1;
    else
        return n + sum(n - 1); 
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The sum of numbers from 1 to %d is: %d\n", n, sum(n));
    }
    return 0;
}
