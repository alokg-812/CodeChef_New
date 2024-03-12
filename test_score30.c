#include <stdio.h>
char* is_valid_game(int N, int X) {
    if (N > X) {
        return "NO";
    } else if (N == X || X % N == 0) {
        return "YES";
    } else {
        return "NO";
    }
}
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, X;
        scanf("%d %d", &N, &X);
        printf("%s\n", is_valid_game(N, X));
    }
    return 0;
}