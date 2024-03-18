#include<stdio.h>
int main() {
    int T;
    printf("Enter the T: ");
    scanf("%d",&T);
    for (int i = 0; i < T ; i++) {
        int R1,R2,R3,R4;
        printf("Enter the dec by R1, R2, R3, R4 : ");
        scanf("%d%d%d%d",&R1,&R2,&R3,&R4);
        if (R1+R2+R3+R4 == 0) {
            printf("IN\n");
        }
        else printf("OUT\n");
    }
}