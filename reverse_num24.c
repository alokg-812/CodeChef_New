#include<stdio.h>
int main() {
    int n,m=0,num;
    scanf("%d",&n);
    for (int i = 0 ; i<n;i++) {
        scanf("%d",num);
        while(num != 0) {
        m = num%10;
        num = num/10;
    }
    }
    
    printf("%d",m);
    return 0;
}