#include<stdio.h>
int main() {
    int T;
    printf("Enter the T: ");
    scanf("%d",&T);
    for (int i = 0; i < T ; i++) {
        int r1,r2,r3,r4;
        printf("Enter the dec by r1, r2, r3, r4 : ");
        scanf("%d%d%d%d",&r1,&r2,&r3,&r4);
        if (r1*r2 <= r3*r4) {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}