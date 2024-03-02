#include<stdio.h>
int main() {
    int T;
    scanf("%d",&T);
    for (int i = 0; i<T;i++) {
        int a, b,c,d;
        scanf("%d%d",&a,&b);
        scanf("%d%d",&c,&d);
        if(c>=a && d>=b) {
            printf("POSSIBLE\n");
        }
        else printf("IMPOSSIBLE\n");
    }
}