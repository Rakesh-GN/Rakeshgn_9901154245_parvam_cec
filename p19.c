#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];  // Declare an array of size n
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);  
    }
    for (i = 0; i < n; i++) {
        sum += arr[i];  // Add each element to sum
    }
    printf("\nThe sum of all elements in the array is: %d\n", sum);
    return 0;
}
