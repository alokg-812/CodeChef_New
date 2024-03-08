#include<stdio.h>

int main() {
    int T;
    printf("Enter no of test casese: ");
    scanf("%d",&T);
    for(int i = 0; i<T;i++) {
        int num;
        scanf("%d",&num);
        int reverse(n) {
        int ld = n, rev = 0;
        while (n!=0){
        ld = n%10;
        rev = rev*10+ld;
        n = n/10;
        }
    printf("%d",rev);
        }
    }
    return 0;
}