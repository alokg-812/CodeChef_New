#include<stdio.h>
int main() {
    int T;
    printf("Enter no of test cases: ");
    scanf("%d",&T);
    for (int i = 0 ; i < T ; i++) {
        int num;
        scanf("%d",&num);
        if((num>=1) && (num<=15)){
            printf("Lower ");
            if(num<=10){
                printf("Double\n");                
            }
            else printf("Single\n");
        }
        if((num>=16) && (num<=30)){
            printf("Upper ");
            if(num<=25){
                printf("Double\n");                
            }
            else printf("Single\n");
        }
    }
}