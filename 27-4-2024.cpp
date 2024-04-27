#include <stdio.h>

void NhapMang(int a[][2], int N, int tongHang[]) {
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        } tongHang[i] = sum;
    }
}

int Max2(int a[][2], int N);
int MaxSkill(int tongHang[], int N, int maxCot2, int M);

int main() {
    int N, M;
    scanf("%d%d", &N, &M);

    int skill[N][2], tongHang[N];
    NhapMang(skill, N, tongHang);

    int maxCot2 = Max2(skill, N);
    int maxSkill = MaxSkill(tongHang, N, maxCot2, M);
    printf("So SM Max = %d\n", maxSkill);

    return 0;
}

int Max2(int a[][2], int N) {
    int maxCot2 = a[0][1];
    for (int i = 1; i < N; i++) {
        if (a[i][1] > maxCot2) {
            maxCot2 = a[i][1];
        }
    }
    return maxCot2;
}

int MaxSkill(int tongHang[], int N, int maxCot2, int M) {
    int sum = 0, dem = 0;
    for (int i = 0; i < N; i++) {
        if (tongHang[i] > maxCot2) {
            sum += tongHang[i];
            dem++;
        }
    }
    sum += (M - dem) * maxCot2;
    return sum;
}