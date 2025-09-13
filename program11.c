/*Program to determinant of matrix(2x2 and 3x3)
@ Akshay Shibu
26/07/2025*/
#include<stdio.h>
int main()
{
	int a[5][5],i,j,n,det=0;
	printf("enter size of matrix (2x2 OR 3x3):");//enter the size of matrix either 2 or 3
	scanf("%d",&n);
	printf("enter the matrix values:");//enter the values into the matrix 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered matrix:\n");//displays the entered matrix
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	if(n==2) //if 2x2 matrix finds its determinant using the formula
	{
		det=((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
	}
	else //if 3x3 matrix find the determinant of the matrix using the formula
	{
		det=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+ a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0])));
	}
	printf("determinenet=%d",det); //prints the determinant value
	return 0;
}
