#include <stdio.h>

int main(void) {
    int T,num;
    scanf("%d",&T);
    for (int i = 0 ; i < T ; i++) {
        scanf("%d",&num);
        if(num%4==0){
            printf("Good\n");
        }
        else printf("Not Good\n");
    }
}

