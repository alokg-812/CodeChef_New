#include <stdio.h>
int min_packs(int N, int X) {
    int c_need = N - X;
    if(c_need <= 0 ) return 0;
    else {
        int p_needed = c_need / 4;
        if (c_need % 4 != 0) {
        p_needed += 1;}
        return p_needed;
    }
}
int main() {
    int T; 
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        int N, X;
        scanf("%d %d", &N, &X);
        int z = min_packs(N, X);
        printf("%d\n", z);
    }
        return 0;
}
