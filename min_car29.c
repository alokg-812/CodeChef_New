#include<stdio.h>
int min(int n) {
    int x;
    x = n/4;
    if(x*4 == n) return x;
    else return (x+1);
}
int main() {
    int T,car;
    printf("Enter T: "); //no of test cases
    scanf("%d",&T);
    for (int i = 0 ; i < T ; i++){
        scanf("%d",&car);
        printf("%d\n",min(car));
    }
}