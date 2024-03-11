#include<stdio.h>
int vote(int T) {
    for (int i = 0; i < T; i++) {
        int N, X, count = 0;
        printf("Enter N and X for test case %d: ", i+1);
        scanf("%d%d", &N, &X);
        printf("Enter ages of %d people separated by spaces: ", N);
        for (int j = 0; j < N; j++) {
            int age;
            scanf("%d", &age);
            if (age >= X) {
                count++;
            }
        }
        printf("Number of eligible voters for test case %d: %d\n", i+1, count);
    }
}
int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    vote(T);
    return 0;
}
