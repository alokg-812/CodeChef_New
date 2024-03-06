#include<stdio.h>
int main() {
    int T;
    printf("Enter No of test cases: ");
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int n;
        scanf("%d", &n);        
        int count = 0;
        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);
            for (int j = 0; j < num; j++) {
                int number;
                scanf("%d", &number);
                if (number >= 1000) {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}