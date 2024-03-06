#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n;i++) {
        int num;
        scanf("%d",&num);
        if (num<=50){
            printf("LEFT\n");
        }
        else printf("RIGHT\n");
    }
}