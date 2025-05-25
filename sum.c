#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        remainder = num % 10; // Extract last digit
        sum += remainder;     // Add to sum
        num /= 10;            // Remove last digit
    }
    
    printf("Sum of digits = %d", sum);
    return 0;
}