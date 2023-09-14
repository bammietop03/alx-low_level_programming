#include <stdio.h>

int is_palindrome(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

int find_largest_palindrome() {
    int largest_palindrome = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }
    return largest_palindrome;
}

int main() {
    int result = find_largest_palindrome();

    FILE *file = fopen("102-result", "w");
    if (file) {
        fprintf(file, "%d", result);
        fclose(file);
    } else {
        printf("Error opening file for writing.\n");
        return 1;
    }

    return 0;
}
