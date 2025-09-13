/*Program to print transpose of matrix
@ Akshay Shibu
26/07/2025*/
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,r,c; 
	printf("enter the no: of rows and coloumns:");
	scanf("%d%d",&r,&c);
	printf("enter the value of matrix:");
	for(i=0;i<r;i++)  // entering the values into matrix
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter matrix:\n");
	for(i=0;i<r;i++) //prints the matrix
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n transpose:\n");
	for(i=0;i<r;i++) //finding the transpose of the matrix
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	
	for(i=0;i<c;i++) //printing the transpose of the matrix
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
