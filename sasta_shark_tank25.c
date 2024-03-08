#include <stdio.h>
int main(void) {
    int T;
    printf("ENTER T:");
    scanf("%d",&T);
    for (int i = 0 ; i < T ; i++) {
        int a,b;
        scanf("%d%d",&a,&b);
        int c = a*10;
        int d = b*5;
        if(c>d) {
            printf("FIRST\n");
        }
        else if(d>c) {
            printf("SECOND\n");
        }
        else printf("ANY\n");
    }
}