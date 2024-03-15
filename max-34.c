#include <stdio.h>

// Function to calculate the maximum tastiness for a given test case
int max_tastiness(int a, int b, int c, int d) {
    // Select the two most tasteful ingredients
    int max_tastiness = (a > b ? a : b) + (c > d ? c : d);
    return max_tastiness;
}

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases

    // Iterate over each test case
    for (int t = 0; t < T; t++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d); // Input the tastiness of the four ingredients
        // Calculate and output the maximum possible tastiness of the dish
        printf("%d\n", max_tastiness(a, b, c, d));
    }

    return 0;
}
