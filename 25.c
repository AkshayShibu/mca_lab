#include <stdio.h>

int main() {
    int degree, i;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    int coeff[degree + 1];

    // Read coefficients
    for (i = degree; i >= 0; i--) {
        printf("Enter coefficient for x^%d: ", i);
        scanf("%d", &coeff[i]);
    }

    // Display polynomial
    printf("Polynomial: ");
    for (i = degree; i >= 0; i--) {
        if (coeff[i] != 0) {
        	if(i!=degree && coeff[i]>=0)
        	{
        		printf(" +");
			}
			else if(i<degree && coeff[i]<0)
			{
				printf(" -");
				coeff[i]=-coeff[i];
			}
        }
        printf(" %d x^%d",coeff[i],i);
    }

    printf("\n");
    return 0;
}

