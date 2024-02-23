#include <stdio.h>
int main(void) {
	int T;
	printf("Enter no_of_test_cases: ");
	scanf("%d",&T);
	for (int i = 0; i < T ; i++) {
	    int n,x;
	    printf("Enter n and x: ");
        scanf("%d%d",&n,&x);
        int t = (n * x)/4;
        if (t*4 == n*x) {
            printf("%d\n",t);
        }
        else printf("%d\n",t+1);
	}
}
