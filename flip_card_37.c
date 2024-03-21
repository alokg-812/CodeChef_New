#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int N, X;
        scanf("%d %d", &N, &X);
        int opern = X < (N - X) ? X : N - X;
        printf("%d\n", opern);
    }
    return 0;
}
