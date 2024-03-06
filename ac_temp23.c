// #include<stdio.h>
// int main() {
//     int n,a,b,c;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for (int i = 0 ; i < n; i++) {
//         scanf("%d %d %d", &a, &b, &c);
//         if(a>=30 && b<=35 && c>=25) {
//             printf("Yes\n");
//         } else {
//             printf("No\n");
//         }
//     }
// }
#include<stdio.h>
int main() {
    int T,a,b,c;
    scanf("%d",&T);
    for (int i = 0 ; i < T ; i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a>=30) && (b<=35) && (c>=25)) {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}