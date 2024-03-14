#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    for(int i = 0 ; i < T ; i++) {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x<50){
            printf("Z\n");
        }else if(y<50){
            printf("F\n");
        }else printf("A\n");
    }
}

