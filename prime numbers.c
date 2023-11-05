#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;  // 0 and 1 are not prime
    }
    if (n <= 3) {
        return 1;  // 2 and 3 are prime
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;  // Divisible by 2 or 3, not prime
    }

    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;  // Divisible by i or i + 2, not prime
        }
        i += 6;
    }
    return 1;  // It's prime
}

int main() {
    int lower, upper;
    printf("Enter the lower bound: ");
    scanf("%d", &lower);
    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Prime numbers in the range %d to %d are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (is_prime(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}
