#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d%d",&X,&Y);
    int Y2 = Y/2;
    int X2 = X-Y;
    int total_time = Y2 + X2;
    printf("%d\n", total_time);
}
