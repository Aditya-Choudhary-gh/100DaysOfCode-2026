#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int size, int* returnSize) {
    for (int i = size - 1; i >= 0; i--) {
        if (digits[i] < 9){
            digits[i]++;
            *returnSize = size;
            return digits;
        }
        digits[i] = 0;
    }

    int* ans = (int*)malloc((size + 1) * sizeof(int));
    ans[0] = 1;

    for (int i = 1; i <= size; i++) {
        ans[i] = 0;
    }

    *returnSize = size + 1;
    return ans;
}

int main() {
    int n;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    int* digits = (int*)malloc(n * sizeof(int));

    printf("Enter digits:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &digits[i]);
    }

    int returnSize;
    int* result = plusOne(digits, n, &returnSize);

    printf("Result: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}