#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
    sum = sumOfDigits(num);
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
