#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int t = 0;
        if (X < Y) {
            t = (Y - X) / 3;
        }
        printf("%d\n", t);
    }
    return 0;
}
