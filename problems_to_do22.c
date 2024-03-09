#include <stdio.h>
int count_p(int N, int ratings[]) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (ratings[i] >= 1000) {
            count++;
        }
    }
    return count;
}
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        int ratings[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &ratings[i]);
        }
        int prob_rm = count_p(N, ratings);
        printf("%d\n", prob_rm);
    }
    return 0;
}
