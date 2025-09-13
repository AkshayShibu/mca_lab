/*program to perform addition and subtraction of 2 matrixs 
@Akshay Shibu
26/07/2025 */

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],s[10][10],r,c,i,j;
	printf("enter the number of rows and coloumns:");
	scanf("%d%d",&r,&c);
	printf("enter first matrix:");//first matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix:");//second matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("sum:\n");
	for(i=0;i<r;i++) //addition
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++) //sum printing
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDiffrence(A-B):\n"); //diffrence
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<r;i++) //diffrence printing
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
