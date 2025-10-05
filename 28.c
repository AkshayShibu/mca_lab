#include <stdio.h>

int main() {
    int deg1, deg2, i, j, r;

    printf("Enter the degree of the 1st polynomial: ");
    scanf("%d", &deg1);
    int coeff1[deg1 + 1];
    for (i = deg1; i >= 0; i--) {
        printf("Enter coefficient for x^%d: ", i);
        scanf("%d", &coeff1[i]);
    }

    printf("Enter the degree of the 2nd polynomial: ");
    scanf("%d", &deg2);
    int coeff2[deg2 + 1];
    for (i = deg2; i >= 0; i--) {
        printf("Enter coefficient for x^%d: ", i);
        scanf("%d", &coeff2[i]);
    }

    int resultDeg = deg1 + deg2;
    int result[resultDeg + 1];

    // Initialize result array
    for (i = 0; i <= resultDeg; i++) result[i] = 0;

    // Multiply
    for (i = 0; i <= deg1; i++) {
        for (j = 0; j <= deg2; j++) {
            result[i + j] += coeff1[i] * coeff2[j];
        }
    }

    // Display result
    printf("Product: ");
    int first = 1;
    for (i = resultDeg; i >= 0; i--) {
        r = result[i];
        if (r == 0) continue;  // skip zero terms

        if (!first) {
            if (r > 0) printf(" + ");
            else printf(" - ");
        } else if (r < 0) {
            printf("-");
        }

        if (r < 0) r = -r;

        if (i == 0) printf("%d", r);
        else if (i == 1) printf("%dx", r);
        else printf("%dx^%d", r, i);

        first = 0;
    }

    if (first) printf("0");  // if all terms are zero
    printf("\n");

    return 0;
}

