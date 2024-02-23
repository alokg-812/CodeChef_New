#include<stdio.h>
int main() {
    int T;
    printf("Enter the T: ");
    scanf("%d",&T);
    for (int i = 0; i < T ; i++) {
        int n;
        printf("Enter the n: ");
        scanf("%d",&n);
        int t = (n*50)*(0.3);
        printf("%d\n",t+1);
}
}