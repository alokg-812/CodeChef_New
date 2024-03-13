#include<stdio.h>
int main() {
    int T,A,B,C;
    printf("Enter T: ");
    scanf("%d",&T);
    for (int i = 0 ; i < T ; i++) {
        scanf("%d%d%d",&A,&B,&C);
        if(A>B) {
            if(B>C){
                printf("%d",A);
            }
            else if(A>C){
                printf("%d",A);
            }
        }
        if(A==B) &&
    }
}