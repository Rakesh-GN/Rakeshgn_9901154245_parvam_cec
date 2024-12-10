#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }
    printf("\nThe elements in reverse order are:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("Element %d: %d\n", n - i, arr[i]);  
    }
    return 0;
}
