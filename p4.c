#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Original number: %d\n", num);
    while (num != 0) {
        remainder = num % 10;        
        reversed = reversed * 10 + remainder; 
        num /= 10;                      
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}
