#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MOD 1000000007LL

int bandingkan(const void *x, const void *y) {
    long long a = *(const long long *)x;
    long long b = *(const long long *)y;

    if (a < b)
        return -1;
    if (a > b)
        return 1;

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    long long *a = malloc(n * sizeof(long long));

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    qsort(a, n, sizeof(long long), bandingkan);

    long long total = (1LL * n * (n - 1) / 2) % MOD;

    long long sama = 0;

    int i = 0;

    while (i < n) {
        int j = i;

        while (j < n && a[j] == a[i]) {
            j++;
        }

        long long banyak = j - i;

        sama = (sama + banyak * (banyak - 1) / 2) % MOD;

        i = j;
    }

    long long jawaban = (total - sama + MOD) % MOD;

    printf("%lld\n", jawaban);

    free(a);

    return 0;
}
