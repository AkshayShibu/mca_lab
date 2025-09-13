/*matix multiplication
@ Akshay Shibu
26/07/2025*/
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],s[10][10],i,j,k,r,c;
	printf("enter the number of rows and coloumn:");
	scanf("%d%d",&r,&c);
	printf("enter matrix A:");//matrix A
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix B:");//matrix B
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Product:\n");//multiplication
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=0;
			for(k=0;k<c;k++)
			{
				s[i][j]=s[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
