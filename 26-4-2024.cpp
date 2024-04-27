#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int cmpfunc(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* get_divisors(int n, int* num_divisors) {
    int* divisors = (int*)malloc(64 * sizeof(int));
    *num_divisors = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors[(*num_divisors)++] = i;
            if (i != n / i)
                divisors[(*num_divisors)++] = n / i;
        }
    }

    return divisors;
}

int find_second_largest_divisor(int a, int b) {
    int g = gcd(a, b);
    int num_divisors;
    int* divisors = get_divisors(g, &num_divisors);

    qsort(divisors, num_divisors, sizeof(int), cmpfunc);

    int second_largest_divisor = (num_divisors >= 2) ? divisors[num_divisors - 2] : 1;

    free(divisors);
    return second_largest_divisor;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    int second_largest_divisor = find_second_largest_divisor(a, b);
    printf("%d\n", second_largest_divisor);

    return 0;
}

// Code Sủa https://4note.net/i7yjdcnvya
