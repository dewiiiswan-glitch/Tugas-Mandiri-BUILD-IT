#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    int ronde = 0;

    scanf("%d %d %d", &a, &b, &c);

    while (a != b && a != c && b != c) {

        // Pemain paling sedikit mendapat 1 kartu
        if (a < b && a < c)
            a++;
        else if (b < a && b < c)
            b++;
        else
            c++;

        // Pemain paling banyak memberi 1 kartu
        if (a > b && a > c)
            a--;
        else if (b > a && b > c)
            b--;
        else
            c--;

        ronde++;
    }

    printf("%d", ronde);

    return 0;
}

