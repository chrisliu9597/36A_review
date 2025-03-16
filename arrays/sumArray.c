#include <stdio.h>
#include <stdlib.h>
int main() {
    int length;

    // Input the length of the array
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    int list[length];
    // Input the contents of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &list[i]);
    }

    // Compute the sum
    int result = 0;
    for (int i = 0; i < length; i++){
        result += list[i];
    }

    // Output the result
    printf("The sum of all elements in the array is: %d\n", result);

    return 0;
}
