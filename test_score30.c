#include<stdio.h>
int can_achieve_marks(int N, int X, int Y) {
    if (Y % X == 0 && Y <= N * X)
        return 1;
    else
        return 0;
}
int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, X, Y;5

        printf("Enter N, X, and Y for test case %d: ", i+1);
        scanf("%d%d%d", &N, &X, &Y);
        if(can_achieve_marks(N, X, Y)){
            printf("Yes");
        }else printf("NO");

    }
    return 0;
}