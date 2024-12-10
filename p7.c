#include <stdio.h>
int countDigits(int n) {
    if (n == 0) 
        return 0;
    return 1 + countDigits(n / 10); 
}
int main() {
    int num, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
    count = countDigits(num);
    printf("The number of digits is: %d\n", count);
    return 0;
}
