#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    for (int t = 0; t < T; t++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        printf("%d\n",X / (2 * Y));
    }
    return 0;
}
