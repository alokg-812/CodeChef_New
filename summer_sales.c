#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++) {
        int x;
        scanf("%d",&x);
        if (x <= 100) {
            printf("%d\n",x);
        }
        else if (x > 100 && x <= 1000) {
            printf("%d\n",x-25);
        }
        else if (x > 1000 && x <= 5000) {
            printf("%d\n",x-100);
        }
        else printf("%d\n",x-500);
    }
}