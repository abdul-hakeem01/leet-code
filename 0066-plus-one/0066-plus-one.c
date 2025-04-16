#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Allocate space for result (might need one extra digit)
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    
    // Copy digits to result
    for (int i = 0; i < digitsSize; i++) {
        result[i] = digits[i];
    }

    // Traverse from last digit and apply "plus one"
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (result[i] < 9) {
            result[i]++;
            *returnSize = digitsSize;
            return result;
        }
        result[i] = 0;
    }

    // If loop completes, all digits were 9 (e.g., 999 + 1 = 1000)
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }

    *returnSize = digitsSize + 1;
    return result;
}
