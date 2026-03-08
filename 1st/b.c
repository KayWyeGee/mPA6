#include <stdio.h>
#include <math.h>

int main() {
    int N, K;
    double x = 999999;
    scanf("%d %d", &N, &K);
    int c[N];

    for (int i = 0; i < N; i++) scanf("%d", &c[i]);
    for (int i = 0; i < N + 1 - K; i++) {
        double m = 0;
        for (int j = i; j < N; j++) {
            m += c[j];
            if (j >= i + K - 1) {
                int l = j - i + 1;
                double n = 0;
                for (int k = i; k < j + 1; k++) n += (c[k] - (m / l)) * (c[k] - (m / l));
                n = sqrt(n / l);
                if (n < x) x = n;
            }
        }
    }

    printf("%lf\n", x);

    return 0;
}