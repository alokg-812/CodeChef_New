#include<stdio.h>
int main() {
    int T;
    scanf("%d",&T);
    for (int i = 0; i<T ; i++){
        int p,q,r,s;
        scanf("%d%d%d%d",&p,&q,&r,&s);
        if(q+r+s < p){
            printf("YES\n");
        }
        else if (p+q+r < s ) {
            printf("YES\n");
        }
        else if (p+q+s < r) {
            printf("YES\n");
        }
        else if (p+r+s < q) {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}