#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    for (int t = 0; t < T; t++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int ans = X / (2 * Y);
        printf("%d\n", ans);
    }
    return 0;
}
