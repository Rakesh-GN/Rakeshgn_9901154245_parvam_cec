#include <stdio.h>
int main() {
    char alphabet;
    char *ptr;
    printf("Uppercase Alphabets:\n");
    for (alphabet = 'A', ptr = &alphabet; *ptr <= 'Z'; (*ptr)++) {
        printf("%c ", *ptr);
    }
    printf("\n\nLowercase Alphabets:\n");
    for (alphabet = 'a', ptr = &alphabet; *ptr <= 'z'; (*ptr)++) {
        printf("%c ", *ptr);
    }
    printf("\n");
    return 0;
}
