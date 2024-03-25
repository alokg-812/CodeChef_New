#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        // int count = 0;
        // if(X == Y) printf("%d",0);
        if(X>Y) printf("%d\n",X-Y);
        else if(X<Y) printf("%d\n",Y-X);
        else printf("%d\n",0);
    }
    return 0;
}