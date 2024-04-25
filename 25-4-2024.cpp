#include <stdio.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    long long Fe_mol = A / 3;
    long long Oz_mol = B / 2;

    long long Fe3O4_mol = Fe_mol < Oz_mol ? Fe_mol : Oz_mol;

    printf("%lld\n", Fe3O4_mol);
    return 0;
}
