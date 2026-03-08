#include <stdio.h>

int main() {
    int a, x = 0;
    scanf("%d", &a);
    
    for (int i = 0; i < a; i++) {
        int b, c;
        scanf("%d %d", &b, &c);
        if (b == 0) x += 0;
        else if (b < 2) x += 5000000;
        else if (b < 4) x += 3000000;
        else if (b < 7) x += 2000000;
        else if (b < 11) x += 500000;
        else if (b < 16) x += 300000;
        else if (b < 22) x += 100000;

        if (c == 0) x += 0;
        else if (c < 2) x += 5120000;
        else if (c < 4) x += 2560000;
        else if (c < 8) x += 1280000;
        else if (c < 16) x += 640000;
        else if (c < 32) x += 320000;
        
        printf("%d\n", x);
        x = 0;
    }

    return 0;
}