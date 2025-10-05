#include <stdio.h>

int main() {
    int deg1,deg2, i,r=0;

    printf("Enter the degree of the 1st polynomial: ");  //1st polynomial
    scanf("%d", &deg1);

    int coeff1[deg1+1];

    for (i = deg1; i >= 0; i--) 
	{
        printf("Enter coefficient for x^%d: ", i);
        scanf("%d", &coeff1[i]);
    }
   
    printf("Enter the degree of the 2nd polynomial: ");  //2nd polynomial
    scanf("%d", &deg2);

    int coeff2[deg2+1];

    for (i = deg2; i >= 0; i--) {
        printf("Enter coefficient for x^%d: ", i);
        scanf("%d", &coeff2[i]);
    }

	//subtraction
	printf("\n result:");
	int maxdeg=(deg1>deg2)?deg1:deg2;  //taking highest degree
	for(i=maxdeg;i>=0;i--)
	{
		int c1=(i<=deg1)?coeff1[i]:0;
		int c2=(i<=deg2)?coeff2[i]:0;
		r=c1-c2;
		
		if(i!=maxdeg && r>=0)
		{
			printf(" + ");
		}
		else if(i!=maxdeg && r<0)
		{
			printf(" - ");
			r=-r;
		}
		printf("%dx^%d",r,i);
	}
    printf("\n");
    return 0;
}



