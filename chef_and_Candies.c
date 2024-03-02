#include <stdio.h>
int min_packets_needed(int N, int X) {
    int candies_needed = N - X;
    if(candies_needed <= 0 ) return 0;
    else {
        int packets_needed = candies_needed / 4;
        if (candies_needed % 4 != 0) {
        packets_needed += 1;}
        return packets_needed;
    }
}
int main() {
    int T; 
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        int N, X;
        scanf("%d %d", &N, &X);
        printf("%d\n", min_packets_needed(N, X));
    }
        return 0;
}
