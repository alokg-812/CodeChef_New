#include<stdio.h>
int main() {
    int T;
    printf("Enter the no of of Test cases: ");
    scanf("%d",&T);
    for (int i = 0; i<T ;i++) {
        int pulp_weight;
        printf("Enter kg of pulp: ");
        scanf("%d",&pulp_weight);
        printf("%d\n",pulp_weight*10);
    } 
}