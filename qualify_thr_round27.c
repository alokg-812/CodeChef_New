#include <stdio.h>
int main(void) {
    int T;
    printf("Enter T: ");
    scanf("%d",&T);
    for (int i = 0 ; i < T ; i++) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if ((b*1 + c*2) >= a){
            printf("Qualify\n");
        }
        else printf("NotQualified\n");
    }
}

